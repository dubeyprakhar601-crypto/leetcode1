class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        int n=arr.size();
        int st=0;
        int end=n-1;
        int ans=0;
        if(arr[0]>k ){
                return k;

            }
        
        while(st<=end){
            int mid=st+(end-st)/2;
            int x=arr[mid]-mid-1;
            
            if(x<k){
                ans=k+mid+1;
                st=mid+1;
            }else{
                end=mid-1;
            }

        }
        return ans;
        
    }
};