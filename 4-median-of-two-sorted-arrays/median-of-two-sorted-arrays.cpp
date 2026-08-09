class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int n1 = nums1.size();
        int n2 = nums2.size();
        int i = 0;
        int j = 0;
        int count = 0;
        int s1 = 0;
        int s2 = 0;
        int n = n1 + n2;
        while (i < n1 && j < n2) {
            if (nums1[i] < nums2[j]) {
                count++;
                if (count == n / 2)
                    s1 = nums1[i];
                if (count == (n + 2) / 2)
                    s2 = nums1[i];
                i++;

            } else {
                count++;
                if (count == n / 2)
                    s1 = nums2[j];
                if (count == (n + 2) / 2)
                    s2 = nums2[j];
                j++;
            }
        }
        while (i < n1) {
            count++;
            if (count == n / 2)
                s1 = nums1[i];
            if (count == (n + 2) / 2)
                s2 = nums1[i];
            i++;
        }
        while (j < n2) {
            count++;
            if (count == n / 2)
                s1 = nums2[j];
            if (count == (n + 2) / 2)
                s2 = nums2[j];
            j++;
        }
        if(n%2==0){
            return (double)(s1+s2)/2;
        }
        return s2;
    }
};