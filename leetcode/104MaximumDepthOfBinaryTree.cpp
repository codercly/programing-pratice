class solution {
    public:
    int maxDepth(TreeNode* root) {
        if(root == NULL) return 0;
        return 1 + max(maxDepth(root->left), maxDepth(root->right));
    }
};



//iterative solution
class solution {
    public:
    int maxDepth(TreeNode* root) {
        if(!root) return 0;

        queue<TreeNode*> q;
        q.push(root);

        int depth = 0;

        while(!q.empty()){
            int levelSize = q.size();

            for(int i=0; i < levelSize; i++){
                TreeNode* curr = q.front();
                q.pop();

                if(curr->left) q.push(curr->left);
                if(curr->right) q.push(curr->rigth);

            }

            depth++;
        }

        return depth;
    }
};