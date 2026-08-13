class Solution {
public:
    string largestOddNumber(string nums) {
        
        int n=nums.length();
        string ans="";
        for(int i=n-1;i>=0;i--){
            if(nums[i]%2==0){
                nums.pop_back();
            }
            else{
                return nums;
            }
        }
        return ans;
    }
};