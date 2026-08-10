class Solution {
public:
    bool searchMatrix(vector<vector<int>>& nums, int target) {
        int st=0;
        int end=nums[0].size()-1;
        while(st<nums.size() && end>=0){
            if(nums[st][end]==target){
                return true;
            }else if(target<nums[st][end]){
                end--;
            }else{
                st++;
            }
        }
        return false;

        
    }
};