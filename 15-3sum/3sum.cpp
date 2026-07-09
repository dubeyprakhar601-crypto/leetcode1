class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<vector<int>>ans;

        int n=nums.size();

        for(int i=0;i<n;i++){
            int st=i+1;
            int end=n-1;
            int tar=-1*nums[i];
            if(i>0 && nums[i]==nums[i-1]) continue;

            while(st<end){

                if(nums[st]+nums[end]==tar){

                    ans.push_back({nums[i],nums[st],nums[end]});
                    st++;
                    end--;
                    while(st<end && nums[st-1]==nums[st]){
                        st++;
                    }
                    
                }
                else if(tar<nums[st]+nums[end]){
                    end--;
                }
                else{
                    st++;
                }
            }
        }
        return ans;
        
    }
};