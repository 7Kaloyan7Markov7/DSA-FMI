class Solution {
public:
    void traverse(TreeNode* root, std::vector<int>& res)
    {
        if(!root) return;

        traverse(root -> left, res);
        traverse(root -> right, res);
        res.push_back(root -> val);
    }
    vector<int> postorderTraversal(TreeNode* root) {
        std::vector<int> res;
        traverse(root, res);
        return res;
    }
};
