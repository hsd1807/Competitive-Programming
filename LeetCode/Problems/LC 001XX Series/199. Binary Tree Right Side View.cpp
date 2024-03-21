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
    void View (TreeNode* root, int level, vector<int>& ans) {
        if (!root)
            return;
        if (ans.size() < level) {
            ans.push_back(root->val);
        }
        else {
            ans[level-1] = root->val;
        }
        View(root->left, level+1, ans);
        View(root->right, level+1, ans);
    }
public:
    vector<int> rightSideView(TreeNode* root) {
        vector<int> ans;
        View(root, 1, ans);
        return ans;
    }
};
