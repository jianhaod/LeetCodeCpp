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
    vector<int> preorderTraversal(TreeNode* root) {
        vector<int> vec;
        if(root == NULL) {
            return vec;
        }
        vec.push_back(root->val);
        int index = 0;
        if(root->left != NULL) {
            vector<int> vecleft = preorderTraversal(root->left);
            for(index = 0; index < vecleft.size(); index++) {
                vec.push_back(vecleft[index]);
            }
        }
        if(root->right != NULL) {
            vector<int> vecright = preorderTraversal(root->right);
            for(index = 0; index < vecright.size(); index++) {
                vec.push_back(vecright[index]);
            }
        }
        return vec;
    }
};