class Solution {
public:
    int romanToInt(string s) {
        unordered_map<char,int>mp;
        char I,V,X,L,C,D,M;
        mp['I']=1;
         mp['V']=5;
          mp['X']=10;
           mp['L']=50;
            mp['C']=100;
             mp['D']=500;
              mp['M']=1000;
              int n=s.length();
              int i=n-1;
              int pre=0;
              int val=0;
              while(i>=0){
                if(mp[s[i]]<pre){
                    val-=mp[s[i]];
                }
                else{
                    val+=mp[s[i]];
                   
                }
                 pre=mp[s[i]];
                i--;
              }
              return val;


        
    }
};