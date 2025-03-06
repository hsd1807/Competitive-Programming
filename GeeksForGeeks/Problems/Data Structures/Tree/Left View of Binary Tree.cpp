/* A binary tree node

struct Node
{
    int data;
    struct Node* left;
    struct Node* right;

    Node(int x){
        data = x;
        left = right = NULL;
    }
};
 */

class Solution {
  public:
    void dfs(Node *root, int height, vector<int>& leftView) {
        if (!root) return;
        if (height == leftView.size()) {
            leftView.push_back(root->data);
        }
        dfs(root->left, height + 1, leftView);
        dfs(root->right, height + 1, leftView);
    }
    vector<int> leftView(Node *root) {
        vector<int> leftView;
        dfs(root, 0, leftView);
        return leftView;
    }
};
