class Solution {
public:
    void traverse(TreeNode* root, std::vector<int>& res)
    {
        if(!root) return;
        traverse(root -> left, res);
        res.push_back(root-> val);
        traverse(root -> right, res);
    }
    vector<int> preorderTraversal(TreeNode* root) {
        std::vector<int> res;
        traverse(root, res);
        return res;
    }
};
