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
    int dy=-1,dx=-2;
    TreeNode* px=NULL;
    TreeNode* py=NULL;
    void check(TreeNode* root, TreeNode* parent, int dpt, int x,int y){
        if(root==NULL) return;
        if(root->val ==x){
            px=parent;
            dx=dpt;
        }
        if(root->val==y){
            py=parent;
            dy=dpt;
        }
        check(root->left,root,dpt+1,x,y);
        check(root->right,root,dpt+1,x,y);
    }
    bool isCousins(TreeNode* root, int x, int y) {
        check(root,NULL,0,x,y);
        return dx==dy && px!= py;

    }
};