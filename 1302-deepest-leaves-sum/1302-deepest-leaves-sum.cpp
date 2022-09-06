/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    int deepestLeavesSum(TreeNode* root) {
        int k = height(root);
        int res = sum_at_k(root, k-1);
        return res;
    }
  
    int sum = 0;
    int sum_at_k(TreeNode* root, int k)
    {
        
        if (!root)
            return sum;
        if (k == 0)
            sum = sum + root->val;
        sum_at_k(root->left, k - 1);
        sum_at_k(root->right, k - 1);
        return sum;
    }
    
    int height(TreeNode* root){
        if(root==NULL) return 0;
        else{
            return 1 + max(height(root->left), height(root->right));
        }
    }
};