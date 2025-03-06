class Solution {
  public:
    // Function to check whether a Binary Tree is BST or not.
    void inorder(Node* root, vector<int>& ans) {
        if (!root) return;
        inorder(root->left, ans);
        ans.push_back(root->data);
        inorder(root->right, ans);
    }
    bool isBST(Node* root) {
        vector<int> ans;
        inorder(root, ans);
        for (int i = 1; i < ans.size(); i++) {
            if (ans[i] < ans[i - 1]) {
                return false;
            }
        }
        return true;
    }
};
