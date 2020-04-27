void addTreeNode(TreeNode* root, int data)//트리노드 추가하는 함수 
{
    TreeNode* a = new TreeNode(data);
  

    if (root->val == NULL)
    {
        root->val = data;
    }
    else
    {
        if (root->val <= a->val)
        {
            if (root->right == NULL)
            {
                root->right = a;
            }
            else
                addTreeNode(root->right, a->val);
        }
        if (root->val > a->val)
        {
            if (root->left == NULL)
            {
                root->left = a;
            }
            else
            addTreeNode(root->left, a->val);
        }
    }


	

}
class Solution {
public:
	TreeNode* bstFromPreorder(vector<int>& preorder) {
        TreeNode* root =new TreeNode(NULL);
      
        for (int i = 0; i < preorder.size(); i++)
        {
            addTreeNode(root, preorder[i]);

        }
        return root;
	}
};
