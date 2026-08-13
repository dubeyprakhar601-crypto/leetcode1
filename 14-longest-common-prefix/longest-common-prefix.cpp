class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int n=strs.size();
        string ans=strs[0];
        for(int i=0;i<n;i++){
            int j=0;
            while(j<ans.size() && j<strs[i].size()&& strs[i][j]==ans[j]){
                j++;
            }
            ans=ans.substr(0,j);
            if(ans.empty()){
                return "";
            }
        }
        return ans;
        
        
    }
};