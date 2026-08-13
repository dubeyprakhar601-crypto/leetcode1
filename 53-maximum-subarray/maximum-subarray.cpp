class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int n=nums.size();
        int i=0;
        int sum=0;
        int maxSum=INT_MIN;
        while(i<=n-1){
            sum+=nums[i];
            maxSum=max(maxSum,sum);
            if(sum<0){
                sum=0;
            }
            
            i++;
        }
        return maxSum;
        
    }
};