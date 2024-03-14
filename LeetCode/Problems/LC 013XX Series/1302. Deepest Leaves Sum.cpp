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
    int Levels(TreeNode* root) {
        if (root == NULL) {
            return 0;
        }
        return max(Levels(root->left), Levels(root->right)) + 1;
    }
    int Sum (TreeNode* root, int level) {
        if (root == NULL) {
            return 0;
        }
        if (level==1) {
            return root->val;
        }
        return Sum(root->left, level-1) + Sum(root->right, level-1);
    }
    int deepestLeavesSum(TreeNode* root) {
        int levels = Levels(root);
        return Sum(root, levels);
    }
};
