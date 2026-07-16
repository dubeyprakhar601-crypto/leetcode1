class Solution {
public:
    void rotate(vector<int>& nums, int k) {

        int n=nums.size();
        k=k%n;
        vector<int>ans(n,0);
        for(int i=0;i<n-k;i++){
            ans[i+k]=nums[i];
        }
        for(int j=n-k;j<n;j++){
            ans[j-(n-k)]=nums[j];
        }
        for(int l=0;l<n;l++){
            nums[l]=ans[l];
        }
        
    }
};