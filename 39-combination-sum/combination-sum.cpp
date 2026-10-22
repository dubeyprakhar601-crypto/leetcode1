class Solution {
public:
void combination(int idx,int target,vector<int>&array,vector<vector<int>>&ans,vector<int>&ds){
     if(idx==array.size()){
        if(target==0){
            ans.push_back(ds);
        }
        return ;
     }
     if(array[idx]<=target){
        ds.push_back(array[idx]);
        combination(idx,target-array[idx],array,ans,ds);
        ds.pop_back();
     }
     combination(idx+1,target,array,ans,ds);
}
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>>ans;
        vector<int>array;
        combination(0,target,candidates,ans,array);
        return ans;
        
    }
};