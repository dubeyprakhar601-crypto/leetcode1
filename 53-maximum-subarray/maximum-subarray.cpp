class Solution {
public:
    int maxSubArray(vector<int>& nums) {

        int i=0;
        int n=nums.size();

        int maxSum=INT_MIN;
        int currSum=0;
        while(i<n){
            currSum+=nums[i];
            maxSum=max(currSum,maxSum);
            if(currSum<0){
                currSum=0;
            }
            i++;
            
        }
        return maxSum;
        
    }
};