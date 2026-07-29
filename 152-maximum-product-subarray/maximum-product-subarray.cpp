class Solution {
public:
    int maxProduct(vector<int>& nums) {

        int maxi=INT_MIN;
        int   suf=1;
        int  pre=1;
        int n=nums.size();
        for(int i=0;i<n;i++){
            if(suf==0){
                suf=1;
            }
            if(pre==0){
                pre=1;
            }
            suf*=nums[n-i-1];
            pre*=nums[i];
            maxi=max(maxi,suf);
            maxi=max(maxi,pre);

        }
        return maxi;
        
    }
};