class Solution {
public:
    bool isGood(vector<int>& nums) {
        unordered_map<int,int>mp;
        int n=nums.size();
        for(int i=0;i<nums.size();i++){
            if(nums[i]>n-1) return false;
            mp[nums[i]]++;

        }
        for(auto it:mp){
            if(it.first!=n-1 && it.second>1){
                return false;
            }
        }
        return true;
    }
};