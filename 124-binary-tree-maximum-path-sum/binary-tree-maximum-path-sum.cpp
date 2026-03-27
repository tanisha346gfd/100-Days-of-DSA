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
    int maxi = INT_MIN;

    int solve(TreeNode* root) {
        if (root == NULL) return 0;

        int leftsum = max(0, solve(root->left));   // ignore negative
        int rightsum = max(0, solve(root->right)); // ignore negative

        // Case 1: path through current node
        maxi = max(maxi, leftsum + rightsum + root->val);

        // Case 2: return path upward
        return root->val + max(leftsum, rightsum);
    }

    int maxPathSum(TreeNode* root) {
        solve(root);
        return maxi;
    }
};