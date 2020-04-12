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
    int pathLength=0;
    int diameterOfBinaryTree(TreeNode* root) {
        preorderDepth(root);
        return pathLength;
        
        }
    int preorder(TreeNode* root,int high){
        int depth = high;
        int left,right =0;
        if(root){
            depth++;
             
            left=preorder(root->left,depth);
            right = preorder(root->right,depth);
            if(left>right)
                depth = left;
            else depth = right;
        }
        return depth;
    }
    int path(TreeNode* root)
    {
        int left=0;
        int right=0;
        if(root==NULL)
            return 0;
        if(root->left!=NULL)
            left = preorder(root->left,0);
        if(root->right!=NULL)
            right = preorder(root->right,0);

        return left+right;
    }
    int preorderDepth(TreeNode* root){
        int result=0;
        if(root){
            result = path(root);
            preorderDepth(root->left);
            preorderDepth(root->right);
        }
        if(result > pathLength)
            pathLength = result;
        return result;
        
    }
};
