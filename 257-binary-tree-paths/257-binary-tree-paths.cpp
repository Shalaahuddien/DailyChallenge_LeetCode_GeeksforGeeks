class Solution {
public:
    void paths(TreeNode* root,string path,vector<string> &res)
    {
    if (root->left == NULL && root->right == NULL) res.push_back(path + to_string(root->val));
    if (root->left != NULL) paths(root->left, path + to_string(root->val) + "->", res);
    if (root->right != NULL) paths(root->right, path + to_string(root->val) + "->", res);
        
    }
    
    vector<string> binaryTreePaths(TreeNode* root) {
      vector<string> res;
      if (root != NULL) paths(root,"",res);
      return res;
    }
};