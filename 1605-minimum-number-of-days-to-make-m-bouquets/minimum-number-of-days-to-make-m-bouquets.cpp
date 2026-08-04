class Solution {
public:
long long noOFBou(vector<int>& nums, int k, int mid){
    int i=0;
    int x=0;
    int ans=0;
    while(i<nums.size()){
        if(nums[i]>mid){
            x=0;
        }else{
            x++;
        }
        if(x==k){
            ans+=1;
            x=0;
        }
        i++;
    }
    return ans;

}
    int minDays(vector<int>& nums, int m, int k) {
        int n=nums.size();
        if((long long)n <(long long) m*k) return -1;
        int low=INT_MAX;
        int high=INT_MIN;
        for(int i=0;i<n;i++){
            low=min(low,nums[i]);
            high=max(high,nums[i]);
        }
        int ans=0;
        while(low<=high){
            int mid=low+(high-low)/2;
            long long x=noOFBou(nums,k,mid);
            if(x>=m){
                ans=mid;
                high=mid-1;


            }else{
                low=mid+1;
            }
        }
        
        return ans;
        
    }
};