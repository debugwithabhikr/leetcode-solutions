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
    void inorder(TreeNode* root,long min, long max,bool& ans ){
        if(root==nullptr){
            return;
        }
        inorder(root->left,min,root->val,ans);
        if(root->val<=min || root->val>=max){
            ans=false;
        }
        inorder(root->right,root->val,max,ans);
    }
    bool isValidBST(TreeNode* root) {
        long min=LONG_MIN;
        long max=LONG_MAX;
        bool ans= true;
        inorder(root,min,max,ans);
        return ans;
        
    }
};