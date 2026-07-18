class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int n=nums.size();
        if(n==0) return n;
        
        int count=1;
        int maxCount=1;
        sort(nums.begin(),nums.end());
        int i=0;
        while(i<n-1){
            if(nums[i+1]==nums[i]+1){
                count++;
                maxCount=max(maxCount,count);
                i++;
            }
            else if(nums[i]==nums[i+1]){
                i++;

            } else{
                count=1;
                i++;
            }

        }
        return maxCount;
        
    }
};