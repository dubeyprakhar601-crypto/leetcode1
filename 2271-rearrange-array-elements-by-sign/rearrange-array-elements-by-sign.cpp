class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int n=nums.size();
        int i=0;
        int j=0;
        vector<int>ans;
        while(j<n && i<n){
            while(nums[i]< 0 ) {
                i++;
            }while(nums[j]>0 ) {
                j++;
            }
            ans.push_back(nums[i]);
            ans.push_back(nums[j]);
            i++;
            j++;
        }
        return ans;
        
    }
};