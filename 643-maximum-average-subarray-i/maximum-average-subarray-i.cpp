class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int n=nums.size();
        

        for(int i=1;i<n;i++){
            nums[i]+=nums[i-1];
        } 
        if(k==n) return double(nums[k-1])/k;
        int j=0;
        double maxAverage = (double)nums[k-1] / k;


        for(int j=1;j+k<=n;j++){
            double average=double((nums[j+k-1]-nums[j-1]))/k;
            maxAverage=max(maxAverage,average);
            

        }
        return maxAverage;
        
    }
};