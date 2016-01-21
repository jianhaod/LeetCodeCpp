/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    bool isBalanced(TreeNode* root) {
        if(root == NULL) {
            return true;
        }
        int i = depth(root->left);
        int j = depth(root->right);
        if(((i-j) > 1) || ((j-i) > 1)) {
            return false;
        }
        
        if(isBalanced(root->left)&&isBalanced(root->right)) {
            return true;
        } else {
            return false;
        }
    }
    
    int depth(TreeNode* root) {
        if(root == NULL) {
            return 0;
        } 
        int ltree = 0;
        int rtree = 0;
        ltree = depth(root->left);
        rtree = depth(root->right);
        if(ltree > rtree) {
            return ltree + 1;
        }
        return rtree + 1;

    }
};