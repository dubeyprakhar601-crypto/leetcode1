class Solution {
public:
bool columnSearch(vector<vector<int>>& nums, int target,int  row,int n){
    int st=0;
    int end=n-1;
    while(st<=end){
        int mid=st+(end-st)/2;
        if(nums[row][mid]==target){
            return true;
        }else if(nums[row][mid]<target){
            st=mid+1;
        }else{
            end=mid-1;
        }
    }
    return false;

}
int rowSearch(vector<vector<int>>& nums, int target,int m){
    int st=0;
    int end=m-1;
    int ans=-1;

    while(st<=end){
        int mid=st+(end-st)/2;

         if(nums[mid][0]<=target){
            ans=mid;
            st=mid+1;
        }else{
            end=mid-1;

        }
    }
    return ans;
}
    bool searchMatrix(vector<vector<int>>& nums, int target) {
        int m=nums.size();
        int n=nums[0].size();
        if(target<nums[0][0] || target>nums[m-1][n-1]){
            return false;
        }
        int row=rowSearch(nums,target,m);
        return columnSearch(nums, target, row, n);


        
    }
};