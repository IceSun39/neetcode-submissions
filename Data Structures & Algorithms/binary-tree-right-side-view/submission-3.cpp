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
    vector<int> rightSideView(TreeNode* root) {
        if (!root) return {};

        TreeNode* left = nullptr, *right = nullptr;
        vector<int> res;
        res.push_back(root->val);

        if(root->left) left = root->left;
        if(root->right) right = root->right;

        while(left || right){
            if(right) res.push_back(right->val);
            else res.push_back(left->val);

            if(right){ 
            if(right->right) right = right->right;
            else if(right->left) right = right->left;
            else right = nullptr;
            }

            if(left){
            if(left->right) left = left->right;
            else if(left->left) left = left->left;
            else left = nullptr;
            }
        }

        return res;
    }
};
