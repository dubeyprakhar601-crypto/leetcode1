class Solution {
public:
    void rotate(vector<vector<int>>& nums) {

        int n=nums.size();

        for (int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                swap(nums[i][j],nums[j][i]);
            }
        }
        int i=0;
        int j=n-1;

        while(i<j){
            for(int k=0;k<n;k++){
                swap(nums[k][i],nums[k][j]);
                
            }
            i++;
            j--;
        }
        
    }
};