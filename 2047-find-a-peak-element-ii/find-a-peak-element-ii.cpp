class Solution {
public:
    vector<int> findPeakGrid(vector<vector<int>>& mat) {
        int m=mat.size();
        int n=mat[0].size();
        int st=0;
        int end=n-1;
        int i=0;
        while(st<=end){
            int mid=st+(end-st)/2;
            int maxElement=mat[0][mid];
            i=0;
            for(int k=0;k<m;k++){
                if(mat[k][mid]>maxElement ){
                    i=k;
                    maxElement=mat[k][mid];
                }
            }
            int left=(mid-1>=0 ?mat[i][mid-1]:-1);
            int right=(mid+1<n?mat[i][mid+1]:-1);
            if(mat[i][mid]>left && mat[i][mid]>right){
                return {i,mid};
            }
           if(left>mat[i][mid]){
            end=mid-1;

           }else{
            st=mid+1;

           }

            
        }
        return {-1,-1};
        
    }
};