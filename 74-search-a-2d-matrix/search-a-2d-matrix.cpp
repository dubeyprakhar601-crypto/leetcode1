class Solution {
public:
    bool searchMatrix(vector<vector<int>>& nums, int target) {
        int m=nums.size();
        int n=nums[0].size();
        int st=0;
        int end=(m*n)-1;
        while(st<=end){
            int mid=st+(end-st)/2;
            int row=mid/n;
            int column=mid%n;
            if(nums[row][column]==target){
                return true;
            }else if(target<nums[row][column]){
                end=mid-1;
            }else{
                st=mid+1;
            }
        }
        return false;
        
    }
};