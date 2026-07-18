class Solution {
public:
    void setZeroes(vector<vector<int>>& nums) {
        int m=nums.size();
        int n=nums[0].size();
        vector<int>indj;

        for(int i=0;i<m;i++){
            int count=0;
            for(int j=0;j<n;j++){
                if(nums[i][j]==0){
                    indj.push_back(j);
                    count++;
                }
            }
            if(count!=0){
                for(int j=0;j<n;j++){
                    nums[i][j]=0;
                }
            }
        }
        for(int i=0;i<m;i++){
            for(int j=0;j<indj.size();j++){
                nums[i][indj[j]]=0;
            }
        }
        
    }
};