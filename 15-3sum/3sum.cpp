class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        
        sort(nums.begin(),nums.end());
        int n=nums.size();
        vector<vector<int>>ans;
        for(int i=0;i<n;i++){
            if(i>0 && nums[i]==nums[i-1]) continue;

            int tar=-nums[i];
            int st=i+1;
            int end=n-1;
            while(st<end){
                if(nums[st]+nums[end]==tar){
                    ans.push_back({nums[i],nums[st],nums[end]});
                    st++;
                    end--;
                    while(st<end && nums[st]==nums[st-1] ){
                        st++;
                    }




                }else if(nums[st]+nums[end]<tar){
                    st++;

                }else{
                    end--;


                }
            }
        }
        return ans;
    }
};