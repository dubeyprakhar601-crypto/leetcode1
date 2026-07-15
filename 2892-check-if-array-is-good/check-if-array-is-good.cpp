class Solution {
public:
    bool isGood(vector<int>& nums) {
        long long count=0;
        int n=nums.size();
        for(int i=0;i<n;i++){
            count+=nums[i];

        }
        if(count==((n*n+n-2)/2)) return true ;
        return false;
        
    }
};