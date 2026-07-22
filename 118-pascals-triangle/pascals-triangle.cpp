class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        if(numRows==1) return {{1}};
        vector<vector<int>>vec={{1},{1,1}};

        for(int j=3;j<=numRows;j++){
            vector<int>ans={1};
            long long res=1;
            for(int i=1;i<j;i++){
                res=res*(j-i);
                res=res/i;
                ans.push_back(res);
            }
            vec.push_back(ans);


        }
        return vec;

        
        
    }
};