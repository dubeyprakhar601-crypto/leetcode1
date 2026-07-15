class Solution {
public:
    bool isGood(vector<int>& nums) {
        int n=nums.size();
        int i=0;
        unordered_set<int>s;
        while(i<n){
            if(nums[i]>n-1) return false;
            if(s.find(nums[i])!=s.end() && nums[i]!=n-1){
                return false;
            }
            s.insert(nums[i]);
            i++;
        }
        if(s.size()!=n-1) return false;
        return true;
        
    }
};