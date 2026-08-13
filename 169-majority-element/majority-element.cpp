class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int  n=nums.size();
        int i=0;
        long long count=0;
        int majEle=nums[0];
        while(i<=n-1){
           if(count==0){
            majEle=nums[i];
            count=1;
           }else if(majEle==nums[i]){
            count++;
           }else{
            count--;
           }
           i++;

        }
        return majEle;

        
    }
};