class Solution {
public:
    bool isMirrored(TreeNode* left, TreeNode* right)
    {
        if(!left && !right) return true;
        if(!left || !right) return false;
        if(left -> val != right -> val) return false;

        return isMirrored(left -> left, right -> right) && isMirrored(left -> right, right -> left);
    }

    bool isSymmetric(TreeNode* root) {
        if(!root) return true;

        return isMirrored(root -> left, root-> right);
    }
};
