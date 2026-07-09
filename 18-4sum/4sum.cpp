class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        sort(nums.begin(),nums.end());
        vector<vector<int>>arr;
        vector<int>ans;


        int n=nums.size();

        for(int i=0;i<n;i++){
            long long  tar1=target-nums[i];
            if(i>0 && nums[i]==nums[i-1]) continue;

            for(int j=i+1;j<n;j++){
                if (j > i + 1 && nums[j] == nums[j-1])
                 continue;
                long long  tar2=tar1-nums[j];

                int st=j+1;
                int end=n-1;
                while(st<end){
                if(tar2==nums[st]+nums[end]){
                    vector<int>ans={nums[i],nums[j],nums[st],nums[end]};
                    arr.push_back(ans);
                    st++;
                    end--;
                    while (st < end && nums[st] == nums[st-1])
                     st++;

                    while (st < end && nums[end] == nums[end+1])
                     end--;
                }
                else if(tar2<nums[st]+nums[end]){

                    end--;

                }
                else{
                    st++;
                }
                }
            }
            
        }
        return arr;
        
    }
};