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
private:
    // int solve(TreeNode* root) {
    //     if (root == NULL) {
    //         return 0;
    //     }
    //     int leftDepth = solve(root->left);
    //     int rightDepth = solve(root->right);
    //     return max(leftDepth, rightDepth) + 1;
    // }
public:
    int maxDepth(TreeNode* root) {
        // return solve(root);
        int h=0;
        if(root==NULL) return h;
        queue<TreeNode*> q;
        q.push(root);
        while(!q.empty()){
            int l=q.size();
            while(l--){
                TreeNode* temp =q.front();
                q.pop();
                if(temp->left != NULL) q.push(temp->left);
                if(temp->right != NULL) q.push(temp->right);
            }
            h++;
        }
        return h;

    }
};