
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
 //https://leetcode.com/problems/maximum-depth-of-binary-tree/submissions/884075933/
class Solution {
public:
    int maxDepth(TreeNode* root) {
        if(!root){
            return 0;
        }
        queue <TreeNode*>q, qbar;
        int cnt = 0;
        q.push(root);
        while(!q.empty()){
            TreeNode* ptr = q.front();
            q.pop();
            if(ptr->left){
                qbar.push(ptr->left);
            }
             if(ptr->right){
                qbar.push(ptr->right);
            }
            if(q.empty()){
                cnt++;
                swap(q,qbar);
            }
        }
        return cnt;
    }
};
