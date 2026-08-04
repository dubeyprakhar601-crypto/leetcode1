class Solution {
public:
long long  hourOfBanana(vector<int>& nums,int mid){
    int n=nums.size();
    long long  ans=0;
    for(int i=0;i<n;i++){
        ans+=ceil((double)nums[i]/(double)mid);
    }
    return ans;
    
}
    int minEatingSpeed(vector<int>& nums, int h) {
        int n=nums.size();
        int st=1;
        int end=INT_MIN;
        
        for(int i=0;i<n;i++){
            end=max(end,nums[i]);
        }
        while(st<=end){
            int mid=st+(end-st)/2;
            long long  x=hourOfBanana(nums,mid);
            if(x <=h){
                end=mid-1;

            }else{
                st=mid+1;

            }

        }
        return st;
        


        
    }
};