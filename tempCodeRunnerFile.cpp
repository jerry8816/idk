vector<int> inorderTraversal(TreeNode* root) {
        vector<int>res;
        idk(root,res);
        return res;
    }


void idk(TreeNode *root,vector<int> & res)    {
if(root ==NULL){
  return;
}
idk(root->left,res);
res.push_back(root->val);
idk(root->right,res);
}