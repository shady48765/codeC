class Solution {
public:
    int subtreesum(TreeNode* t) {
       int ans = 0;
       if (t) {
           ans += t->val;
           ans += subtreesum(t->left);
           ans += subtreesum(t->right);
       }
       return ans;
        
    }
    int findTilt(TreeNode* root) {
        int ans = 0;

        if (root) {
            ans += abs(subtreesum(root->left)- subtreesum(root->right));
            ans += findTilt(root->left);
            ans += findTilt(root->right);
        }
        return ans;
    }
};

