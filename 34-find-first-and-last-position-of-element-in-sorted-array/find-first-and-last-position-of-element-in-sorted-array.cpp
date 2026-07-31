class Solution {
public:
int firstOccurrence(vector<int>& nums, int target,int n){
    
    int st=0;
    int end=n-1;
    int ans=-1;
    while(st<=end){
        int mid=st+(end-st)/2;
        if(target==nums[mid]){
            ans=mid;
            end=mid-1;

        }
        else if(target<nums[mid]){
            end=mid-1;
        }else{
            st=mid+1;
        }
    }
    return ans;
}
int lastOccurrence(vector<int>& nums, int target,int n){
    
    int st=0;
    int end=n-1;
    int ans=-1;
    while(st<=end){
        int mid=st+(end-st)/2;

        if(target==nums[mid]){
            ans=mid;
            st=mid+1;
        }else if(target<nums[mid]){
            end=mid-1;

        }else{
            st=mid+1;
        }
    }
    return ans;
}
    vector<int> searchRange(vector<int>& nums, int target) {
        int n=nums.size();
        int first=firstOccurrence(nums,target,n);
        int last=lastOccurrence(nums,target,n);
        return {first,last};



        
    }
};