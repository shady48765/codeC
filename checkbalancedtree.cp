struct TreeNode {
      int val;
      TreeNode *left;
      TreeNode *right;
      TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};
int getHeight(TreeNode* root) {
    return root == NULL ? 0 : 1 +
        max(getHeight(root->left), getHeight(root->right));
}
class Solution {
public:   
    bool isBalanced(TreeNode* root) {
        if (root == NULL) {
            return true;
        }
        int left = getHeight(root->left);
        int right = getHeight(root->right);
        return abs(left - right) <= 1 && isBalanced(root->left) && isBalanced(root->right);
    }
};