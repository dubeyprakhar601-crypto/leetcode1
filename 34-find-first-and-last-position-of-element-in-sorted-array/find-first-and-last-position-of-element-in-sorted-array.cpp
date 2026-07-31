class Solution {
public:
int lowerBound(vector<int>& nums, int target){
    int n=nums.size();
    int st=0;
    int end=n-1;
    int ans=n;
    while(st<=end){
        int mid=st+(end-st)/2;

        if(target<=nums[mid]){
            ans=mid;
            end=mid-1;

        }else{
            st=mid+1;
        }
    }
    return ans;
}
int upperBound(vector<int>& nums, int target){
    int n=nums.size();
    int st=0;
    int end=n-1;
    int ans=n;
    while(st<=end){
        int mid=st+(end-st)/2;

        if(target<nums[mid]){
            end=mid-1;
            ans=mid;
        }else{
            st=mid+1;
        }
    }
    return ans;
}
    vector<int> searchRange(vector<int>& nums, int target) {
        int lb=lowerBound(nums,target);
        if(lb==nums.size() || nums[lb]!=target) return {-1,-1};
        int up=upperBound(nums,target);


        return {lb,up-1};



       
    }
};