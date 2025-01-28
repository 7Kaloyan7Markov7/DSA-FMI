class Solution {
public:
    bool validate(TreeNode* root, TreeNode* min, TreeNode* max)
    {
        if(!root) return true;

        if((min && root -> val <= min -> val) || (max && root -> val >= max -> val)) return false;
        return validate(root -> left,min, root) && validate(root-> right,root,max);
    }

    bool isValidBST(TreeNode* root) {
       if(!root) return true;

        return validate(root, nullptr, nullptr);
    }
};
