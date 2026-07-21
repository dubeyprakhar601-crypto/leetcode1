class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& nums) {

        vector<int>nums1;
        int srow=0;
        int scol=0;
        int erow=nums.size()-1;
        int ecol=nums[0].size()-1;
        int n=(erow+1)*(ecol+1);

        while(scol<=ecol && srow<=erow){

            for(int i=scol;i<=ecol;i++){
                nums1.push_back(nums[srow][i]);
            }
            
            for(int i=srow+1;i<=erow;i++){
                nums1.push_back(nums[i][ecol]);
            }
            if(nums1 .size()==n){
                return nums1;
            }
            
            for(int i=ecol-1;i>=scol;i--){
                if(ecol==scol){
                    break;
                }
                nums1.push_back(nums[erow][i]);
            }
            
            
            for(int i=erow-1;i>=srow+1;i--){
                if(erow==srow){
                    break;
                }
                nums1.push_back(nums[i][scol]);
            }

            srow++;
            scol++;
            erow--;
            ecol--;
        }
        return nums1;
        
    }
};