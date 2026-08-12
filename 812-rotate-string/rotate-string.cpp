class Solution {
public:
    bool rotateString(string s, string goal) {
        int n=s.length();
        int m=goal.length();
        if(n!=m) return false;
        for(int i=0;i<n;i++){
            int a=s[0];
            s.erase(s.begin());
            s+=a;
            if(s==goal){
                return true;
            }
        }
        return false;
    }
};