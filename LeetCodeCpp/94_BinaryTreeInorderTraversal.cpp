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
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int> vec;
        if(root == NULL) {
            return vec;
        }
        if(root->left != NULL) {
            vector<int> vecleft = inorderTraversal(root->left);
            vec.insert(vec.end(), vecleft.begin(), vecleft.end());
        }
        vec.push_back(root->val);
        if(root->right != NULL) {
            vector<int> vecright = inorderTraversal(root->right);
            vec.insert(vec.end(), vecright.begin(), vecright.end());
        }
        return vec;
    }
};