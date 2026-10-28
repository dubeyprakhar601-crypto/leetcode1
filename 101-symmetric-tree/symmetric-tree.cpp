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
bool isSymmetry(TreeNode* leftT,TreeNode*rightT){
    if(leftT==nullptr && rightT==nullptr){
        return true;
    }
    if(leftT==nullptr || rightT==nullptr){
        return false;
    }
    if(leftT->val!=rightT->val){
        return false;
    }
   return  isSymmetry(leftT->left,rightT->right) && isSymmetry(leftT->right,rightT->left);
    

    
}
    bool isSymmetric(TreeNode* root) {
        if(root==nullptr){
            return true;
        }
        return isSymmetry( root->left,root->right);
        
    }
};