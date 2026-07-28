class Solution {
public:
int countPairs(vector<int>& nums,int low,int mid,int high){
    
    int right=mid+1;
    int count=0;
    for(int i=low;i<=mid;i++){
        while(right<=high && (long long)nums[i]>2LL*nums[right]){
            right++;
            
        }
        count+=(right-(mid+1));
    }
    return count;
}
void merge(vector<int>& nums,int low,int mid,int high){
    int i=low;
    int  j=mid+1;
    vector<int>temp;
   
    while(i<=mid && j<=high){
        if(nums[i]<=nums[j]){
            temp.push_back(nums[i]);
        i++;
        }else{
            temp.push_back(nums[j]);
            j++;
        }
    }
    while(i<=mid){
        temp.push_back(nums[i]);
        i++;

    }
    while(j<=high){
        temp.push_back(nums[j]);
            j++;

    }
    for(int k=low;k<=high;k++){
        nums[k]=temp[k-low];
    }
}
int mergeSort(vector<int>& nums,int low,int high){
    int cnt=0;
    if(low>=high){
        return cnt ;
    }
    int mid=low+(high-low)/2;
    cnt+=mergeSort(nums,low,mid);
    cnt+=mergeSort(nums,mid+1,high);
    cnt+=countPairs(nums,low,mid,high);
    merge(nums,low,mid,high);
    return cnt;
}
    int reversePairs(vector<int>& nums) {
        return mergeSort(nums,0,nums.size()-1);
        
    }
};