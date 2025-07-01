**
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
    void solve(TreeNode * root, int curr_max, int& counter) {
        if (!root) return;
        if (root->val >= curr_max) counter++;
        curr_max = max(curr_max, root->val);
        solve(root->left, curr_max, counter);
        solve(root->right, curr_max, counter);
    }
    int goodNodes(TreeNode* root) {
        int counter = 0;
        solve(root, root->val, counter);
        return counter;
    }
};
