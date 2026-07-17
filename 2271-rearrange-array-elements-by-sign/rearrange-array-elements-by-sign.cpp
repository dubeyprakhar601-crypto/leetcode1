class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int n=nums.size();
        int i=0;
        int j=0;
        int k=1;
        vector<int>ans(n,0);
        while(i<n){
            if(nums[i]>0){
                ans[j]=nums[i];
                j+=2;
            }else{
                ans[k]=nums[i];
                k+=2;
            }
            i++;
        }
        return ans;
    }
};