class Solution {
public:
bool isValid(vector<int>& nums, int threshold,int mid){
    int ans=0;
    for(int i=0;i<nums.size();i++){
        ans+=ceil((double)nums[i]/(double)mid);
    }
    return ans<=threshold;
}
    int smallestDivisor(vector<int>& nums, int threshold) {
        
        int n=nums.size();
        int st=1;
        int end=*max_element(nums.begin(),nums.end());
        int ans=0;
        
        while(st<=end){
            int mid=st+(end-st)/2;

            if(isValid(nums,threshold,mid) ){
                end=mid-1;
                ans=mid;

            }else{
                st=mid+1;
            }
        }
        return ans;
    }
};