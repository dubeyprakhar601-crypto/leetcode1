class Solution {
public:
bool isSorted(vector<int>nums,int i){
    int n=nums.size();
    if(nums[i]>nums[0]) return false;
    for(int j=i+1;j<n;j++){
        if(nums[j]>nums[0]) return false;
        if(nums[j]<nums[j-1]){
            return false;
        }

    }
    return true;
}
    bool check(vector<int>& nums) {
        int n=nums.size();
        if(n==1 || n==2)return true;
        int i=0;
        while(i<n-1){
            if(nums[i+1]<nums[i]){
                return isSorted(nums,i+1);
            }
            i++;
        }
        return true;

        
    }
};