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
void maxdepth(TreeNode* root,int &maxi,int n){
    if(root==nullptr){
        return ;
    }
    maxi=max(maxi,n);
    maxdepth(root->left,maxi,n+1);
    maxdepth(root->right,maxi,n+1);
}
    int maxDepth(TreeNode* root) {
        if(root==nullptr){
            return 0;
        }
        int maxi=0;
        int n=1;
        maxdepth(root,maxi,n);
        return maxi;
        
    }
};