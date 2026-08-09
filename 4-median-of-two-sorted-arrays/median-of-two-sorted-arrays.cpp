class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int i=0;
        int st=0;
        int n1=nums1.size();
        int n2=nums2.size();
        vector<int>ans;
        while(i<=n1-1 && st<=n2-1){
            if(nums1[i]<=nums2[st]){
                ans.push_back(nums1[i]);
                i++;
            }else{
                ans.push_back(nums2[st]);
                st++;
            }

        }
        while(i<=n1-1){
            ans.push_back(nums1[i]);
            i++;
        }while(st<=n2-1){
            ans.push_back(nums2[st]);
            st++;
        }
        if((n2+n1)%2==0){
            return (double)(ans[(n1+n2)/2]+ans[(n1+n2-2)/2])/2;
        }
            return ans[(n1+n2)/2];
        
        
    }
};