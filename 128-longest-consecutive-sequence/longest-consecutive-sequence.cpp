class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int n=nums.size();
        int longest=1;
        unordered_set<int>s;
        if(n==0) return 0;
        for(int i=0;i<n;i++){
            s.insert(nums[i]);

        }
        for(auto it:s){
            if(s.find(it-1)==s.end()){
                int count=1;
                int x=it;
                while(s.find(x+1)!=s.end()){
                    count++;
                    x++;
                }
                longest=max(longest,count);

            }
        }
        return longest;

        
    }
};