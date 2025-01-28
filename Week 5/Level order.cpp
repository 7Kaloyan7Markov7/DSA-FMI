class Solution {
public:
    vector<vector<int>> levelOrder(TreeNode* root) {
        std::vector<std::vector<int>> res;
        if(!root) return res;
        std::queue<TreeNode*> q;

        q.push(root);

        while(!q.empty())
        {
            int size = q.size();
            std::vector<int> currentLevel;
            for(int i = 0;i < size;++i)
            {
                TreeNode* currentNode = q.front();
                q.pop();

                if(currentNode -> left) q.push(currentNode-> left);
                if(currentNode -> right) q.push(currentNode -> right);

                currentLevel.push_back(currentNode -> val);
            }
            res.push_back(currentLevel);
        }
    return res;
    }
};
