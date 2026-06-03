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
    vector<vector<int>> res;
    vector<vector<int>> levelOrder(TreeNode* root) {
        bfs(root, 0);
        return res;
    }

    void bfs(TreeNode* root, int h){
        if(!root) return;
        if(res.size() > h){
            res[h].push_back(root->val);
        }
        else{
            res.push_back({root->val});
        }
        h++;
        bfs(root->left, h);
        bfs(root->right, h);
    }
};
