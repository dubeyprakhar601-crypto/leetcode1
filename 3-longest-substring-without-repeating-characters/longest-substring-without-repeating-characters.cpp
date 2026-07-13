class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n=s.length();
        int i=0;
        int j=0;
        int maxsize=0;
        unordered_set<char>st;
        int size=0;
        while(i<=j && j<n){
            while(st.find(s[j])!=st.end()){
                st.erase(s[i]);
                
                
                i=i+1;
                

            }
            st.insert(s[j]);
            size=j-i+1;
            j++;
            maxsize=max(maxsize,size);


        }
        return maxsize;
        
    }
};