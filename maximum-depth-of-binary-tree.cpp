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
    void dfs(TreeNode* root, int temp, int& ans) {
        if(!root)
            return;
        
        if(temp > ans) {
            ans = temp;
        }
        
        dfs(root -> left, temp + 1, ans);
        dfs(root -> right, temp + 1, ans);
    }
    int maxDepth(TreeNode* root) {
        int temp = 1, ans = 0;
        dfs(root, temp, ans);
        return ans;
    }
};
