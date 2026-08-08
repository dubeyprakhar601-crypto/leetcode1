class Solution {
public:
bool noOfSubarray(vector<int>& nums, int k,int maxSum){
    int n=nums.size();
    int array=1;
    int sum=0;
    for(int i=0;i<n;i++){
       if(sum+nums[i]<=maxSum){
        sum+=nums[i];
       }else{
        array++;
        sum=nums[i];
       }
        
    }
    return array<=k;
}
    int splitArray(vector<int>& nums, int k) {
        int n=nums.size();
        int st=*max_element(nums.begin(),nums.end());
        int end=0;
        for(int i=0;i<n;i++){
            end+=nums[i];
        }
        while(st<=end){
            int mid=st+(end-st)/2;
            if(noOfSubarray(nums,k,mid)){
                end=mid-1;

            }else{
                st=mid+1;

            }
        }return st;
        
    }
};