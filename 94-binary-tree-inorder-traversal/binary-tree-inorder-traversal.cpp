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
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int>ans;
        if(root==nullptr){
            return ans;

        }
        stack<TreeNode*>st;
        st.push(root);
        while(!st.empty()){
            if(st.top()==nullptr){
                st.pop();
                if(st.empty()) break;
                TreeNode* rightNode=st.top()->right;
                ans.push_back(st.top()->val);
                st.pop();
                root=rightNode;
                st.push(root);
            }
           else{
            st.push(st.top()->left);
           }
        }
        return ans;
        
    }
};