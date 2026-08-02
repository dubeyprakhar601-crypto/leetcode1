class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int st=1;
        int n=nums.size();
        if(n==1) return 0;
        if(nums[0]>nums[1]){
            return 0;
        }
        if(nums[n-1]>nums[n-2]) return n-1;
        while(st<=n-2)
        if(nums[st-1]<nums[st] && nums[st]>nums[st+1]){
            return st;
        }
        else{
            st++;
        }
        return -1;
        
        
    }
};