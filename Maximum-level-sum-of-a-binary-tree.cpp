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
    int maxLevelSum(TreeNode* root) {
        queue<TreeNode*>q;
        q.push(root);
        if(root->left==NULL&&root->right==NULL)return 1;
        int l=0, m=INT_MIN, ans=0;
        while(1){
            int n=q.size(), s=0;
            while(n--){
                TreeNode *temp = q.front();
                q.pop();
                s+=temp->val;
                if(temp->left)q.push(temp->left);
                if(temp->right)q.push(temp->right);
            }
            l++;
            if(s>m){
                m=s;
                ans=l;
            }
            if(q.empty())return ans;
        }
        return ans;
    }
};
