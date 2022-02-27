class Solution {
public:
    bool Compair(TreeNode* lefttree,TreeNode* righttree ){
        if(lefttree==NULL && righttree ==NULL)
        {
            return true;
        }
        if(lefttree==NULL || righttree ==NULL)    
        {
            return false;
        }
        if(lefttree->val!=righttree ->val)
        {
            return false;
        }
        return Compair(lefttree->left,righttree ->right) && Compair(lefttree->right,righttree ->left);
    }
    bool isSymmetric(TreeNode* root) {
        if(root==NULL)
        {
            return true;
        }    
        return Compair(root->left,root->right);
    }
};