class Solution {
    vector<int>ans;
public:
    
    void inorder(TreeNode* root){
        if(!root){
            return ;
        }
        inorder(root->left);
        ans.push_back(root->val);
        inorder(root->right);
        
    }
    vector<int> inorderTraversal(TreeNode* root) {
        inorder(root);
        return ans;
        
    }
};