class Solution {
public:
    void traversal(TreeNode* root, int low, int high, int& res)
    {
        if(!root) return;
        if(root -> val >= low && root -> val <= high) res += root -> val;
        traversal(root -> left, low, high,res);
        traversal(root -> right, low, high, res);
        
    }
    int rangeSumBST(TreeNode* root, int low, int high) {
        int res = 0;
        traversal(root,low,high,res);

        return res;
    }
};
