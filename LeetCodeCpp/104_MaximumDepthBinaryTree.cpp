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
    int maxDepth(TreeNode* root) {
    	int depth = 0;
	int ldep = 0;
	int rdep = 0;
	if(root == NULL) {
	    return 0;
	}

    	if(root->left != NULL) {
	    ldep = maxDepth(root->left);
	}
	if(root->right != NULL) {
	    rdep = maxDepth(root->right);
	} 

	if(ldep > rdep) {
	    depth = ldep + 1;
	} else {
	    depth = rdep + 1;	
	}

	return depth;
    }
};
