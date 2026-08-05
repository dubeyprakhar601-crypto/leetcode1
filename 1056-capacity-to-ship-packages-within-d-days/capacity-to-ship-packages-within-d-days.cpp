class Solution {
public:
bool isNoOfDays(vector<int>& nums,int days,int weight){
    int n=nums.size();
    int ans=0;
    int day=1;
    for(int i=0;i<n;i++){
        ans+=nums[i];
        if(ans>weight){
            day+=1;
            ans=nums[i];
        }
        if(day>days){
            return false;
        }
    }
    return day<=days;

    
}
    int shipWithinDays(vector<int>& nums, int days) {
        int n=nums.size();
        int st=*max_element(nums.begin(),nums.end());
        int end=0;
        for(int i=0;i<n;i++){
            end+=nums[i];
        }
        int ans=0;
        while(st<=end){
            int mid=st+(end-st)/2;
            if(isNoOfDays(nums,days,mid)){
                ans=mid;
                end=mid-1;
            }else{
                st=mid+1;
            }
        }
        return ans;
        
        
    }
};