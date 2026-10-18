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
    void inorder(TreeNode* root,int k, int& count, int& ans){
        if(root==nullptr){
            return;
        }
        inorder(root->left,k,count,ans);
        if(count==k){
            ans=root->val;
        }
        count++;
        inorder(root->right,k,count,ans);
    }
    int kthSmallest(TreeNode* root, int k) {
        int count=1;
        int ans=-1;
        inorder(root,k,count,ans);
        return ans;
        
    }
};