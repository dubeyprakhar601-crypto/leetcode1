class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int n=nums.size();
        int count=0;
        int i=1;
        
        while(i<n){
            nums[i]=nums[i]+nums[i-1];
            i++;
        }
        unordered_map<int,int>m;
        
        for(int j=0;j<n;j++){

            if(nums[j]==k) count++;

            int val=nums[j]-k;

            if(m.find(val)!=m.end()){
                count+=m[val];
            }else{
                m[nums[j]]==0;
            }
            m[nums[j]]++;
        }
        return count;
    }
};