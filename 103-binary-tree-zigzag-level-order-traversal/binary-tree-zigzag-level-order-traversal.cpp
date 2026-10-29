/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
void reverseArray(vector<int>&nums){
    int n=nums.size();
    for(int i=0;i<n/2;i++){
        int x=nums[i];
        nums[i]=nums[n-i-1];
        nums[n-i-1]=x;
    }
}
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int>>ans;
        if(root==nullptr){
            return ans;
        }
        queue<TreeNode*>q;
        q.push(root);
        bool flag=true;
        while(!q.empty()){
            int size=q.size();
            vector<int>lvl;
            for(int i=0;i<size;i++){
                TreeNode* node=q.front();
                q.pop();
                if(node->left) q.push(node->left);
                if(node->right) q.push(node->right);
                lvl.push_back(node->val);
            }
            if(flag){
                ans.push_back(lvl);
               
            }else{
                reverseArray(lvl);
                ans.push_back(lvl);
            }
            flag=!flag;

        }
        return ans;
    }
};