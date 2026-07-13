class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n=s.length();
        int i=0;
        int j=0;
        int maxsize=0;
        unordered_map<char,int>mp;
        while(j<n){
            if(mp.find(s[j])!=mp.end() && i<=mp[s[j]]){
                i=mp[s[j]]+1;
                mp[s[j]]=j;
            }
            mp[s[j]]=j;
            int size=j-i+1;
            j++;
            maxsize=max(maxsize,size);
        }
        return maxsize;
        
    }
};