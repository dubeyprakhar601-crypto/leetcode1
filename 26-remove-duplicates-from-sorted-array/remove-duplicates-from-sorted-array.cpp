class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int i=0;
        int j=0;
        int count=1;
        int n=nums.size();
        while(i<n){
            if(nums[i]==nums[j]){
                i++;
            }else{
                nums[j+1]=nums[i];
                i++;
                j++;
                count++;

            }
        }
        return count;
        
    }
};