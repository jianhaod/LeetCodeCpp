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
    vector<vector<int>> levelOrderBottom(TreeNode* root) {
        vector<vector<int>> result;
        if(root == NULL) {
            return result;
        }
        queue<TreeNode *> node;
        node.push(root);
        
        TreeNode* current;
        
        while(!node.empty()) {
            int count = node.size();
            vector<int> tmp;
            while(count--) {
               current = node.front();
               tmp.push_back(current->val);
               if(current->left) {
                   node.push(current->left);
               }
               if(current->right) {
                   node.push(current->right);
               }
               node.pop();
            }
            result.insert(result.begin(), tmp);
        }
        
        return result;
    }
};