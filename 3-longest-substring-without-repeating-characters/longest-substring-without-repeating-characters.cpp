class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        
        int maxSize = 0;
        int n = s.length();
        if(n==1 || n==0) return n;
        for (int i = 0; i < n; i++) {
            int j = i;
            unordered_map<char, int> m;
            int size = 0;
            while (j < n) {
                if (m.find(s[j]) != m.end()) {
                    break;
                }
                m[s[j]] = 1;
                size++;
                j++;
                maxSize = max(maxSize, size);
            }
        }
        return maxSize;
    }
};