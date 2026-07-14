class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int ,int >mp;
        int n=nums.size();
        int maxFreq=0;
        for(int i=0;i<n;i++){
            mp[nums[i]]+=1;
            maxFreq=max(mp[nums[i]],maxFreq);

        }
        for(auto it:mp){
            if(it.second==maxFreq){
                return it.first;
            }
        }
        return -1;
        

        
    }
};