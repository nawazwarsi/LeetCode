class Solution {
public:
	bool isValidBST(TreeNode* root) {
		return isValidBST(root,LONG_MIN,LONG_MAX);
	}
	bool isValidBST(TreeNode* root,long mini,long maxi){
		if(root==NULL)
			return true;
		if(root->val>=maxi || root->val<=mini)
			return false;
		return isValidBST(root->left,mini,root->val) && isValidBST(root->right,root->val,maxi);
	}
};