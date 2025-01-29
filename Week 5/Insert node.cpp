class Solution {
public:
    TreeNode* insertIntoBST(TreeNode* root, int val) {
        if(!root) return new TreeNode(val);

        TreeNode* current = root;

        while(true)
        {
            if(val < current -> val)
            {
                if(!current -> left) 
                {
                    current -> left = new TreeNode(val);
                    break;
                }
                else
                {
                    current = current -> left;
                }
            }
            else if(val > current -> val)
            {
                if(!current -> right)
                {
                    current -> right = new TreeNode(val);
                    break;
                }
                else
                {
                current = current -> right;
                }
            }
        }
        return root;
    }
};
