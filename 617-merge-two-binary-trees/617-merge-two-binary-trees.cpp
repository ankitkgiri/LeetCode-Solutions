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
    TreeNode* mergeTrees(TreeNode* root1, TreeNode* root2) {
        TreeNode* root = new TreeNode();
        
        helper(root1, root2, root);
        
        return root;
        
    }
    
    void helper(TreeNode* root1, TreeNode* root2, TreeNode* &root) {
        
        if (root1 == nullptr && root2 == nullptr){
            root = nullptr;
            return;
        }
        
        root = new TreeNode();
        
        if (root1 != nullptr) root->val += root1->val;
        
        if (root2 != nullptr) root->val += root2->val;
        
        helper(root1 == nullptr ? nullptr : root1->left, root2 == nullptr ? nullptr : root2->left, root->left);
        helper(root1 == nullptr ? nullptr : root1->right, root2 == nullptr ? nullptr : root2->right, root->right);
        
    }
};