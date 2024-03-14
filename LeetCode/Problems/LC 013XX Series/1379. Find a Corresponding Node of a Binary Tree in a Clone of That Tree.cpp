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
    TreeNode* getTargetCopy(TreeNode* original, TreeNode* cloned, TreeNode* target) {
        ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
        if (original == NULL) {
            return NULL;
        }
        if (original->val == target->val) {
            return cloned;
        }
        TreeNode* found = getTargetCopy(original->left, cloned->left, target);
        if(!found) found = getTargetCopy(original->right, cloned->right, target);
        return found;    
    }
};
