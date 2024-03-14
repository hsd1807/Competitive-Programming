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
    void traverse(TreeNode* root, vector<int>& data) {
        if (!root) {
            return;
        }
        traverse(root->left, data);
        data.push_back(root->val);
        traverse(root->right, data);
    }
    vector<int> getAllElements(TreeNode* root1, TreeNode* root2) {
        vector<int> bst1, bst2, ans;
        traverse(root1, bst1); traverse(root2, bst2);
        int index, index1, index2; index = index1 = index2 = 0;
        while (index1 < bst1.size() && index2 < bst2.size()) {
            if (bst1[index1] < bst2[index2]) {
                ans.push_back(bst1[index1++]);
            }
            else {
                ans.push_back(bst2[index2++]);
            }
        }
        while (index1 < bst1.size()) {
            ans.push_back(bst1[index1++]);
        }
        while (index2 < bst2.size()) {
            ans.push_back(bst2[index2++]);
        }
        return ans;
    }
};
