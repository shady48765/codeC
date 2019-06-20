class Solution {
public:
    bool isUnivalTree(TreeNode* root) {
        if (root == NULL) return true;
		bool sl = isUnivalTree(root->left);
		if (!sl) return false;

		bool smid = true;
		if ((root->left) != NULL)
			smid = (root->val == root->left->val) && smid;
		if((root->right) != NULL)
			smid = (root->val == root->right->val) && smid;
		if (!smid) return false;
		bool sr = isUnivalTree(root->right);
		if (!sr) return false;
		return (sl && smid && sr);
    }
};

