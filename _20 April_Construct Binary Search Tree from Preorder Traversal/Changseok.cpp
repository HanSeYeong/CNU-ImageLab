/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    TreeNode* bstFromPreorder(vector<int>& preorder) {
        TreeNode* root=new TreeNode;
        root->val = preorder[0];
        for(int i=1;i<preorder.size();i++){
            insert(root, preorder[i]);
        }
        return root;
    }
    
    void insert(TreeNode* &root, int value)
    {
        if(root==NULL){
            root = new TreeNode;
            root->val = value;
        }
        else{
           if(root->val >= value){
                insert(root->left, value);
            }
            else{
               
                insert(root->right,value);
            }
        }
        return;
        
    }
};