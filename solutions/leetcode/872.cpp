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
    bool leafSimilar(TreeNode* root1, TreeNode* root2) {
        stack<TreeNode*> s;
        vector<int> v1, v2;
        s.push(root1);
        while (!s.empty()) {
            TreeNode * curr = s.top(); s.pop();
            if (curr->left) s.push(curr->left);
            if (curr->right) s.push(curr->right);
            if (!curr->left and !curr->right) v1.push_back(curr->val);
        }
        s.push(root2);
        while (!s.empty()) {
            TreeNode * curr = s.top(); s.pop();
            if (curr->left) s.push(curr->left);
            if (curr->right) s.push(curr->right);
            if (!curr->left and !curr->right) v2.push_back(curr->val);
        }
        if (v1.size() != v2.size()) return false;
        for (int i = 0; i < v1.size(); i++)
            if (v1[i] != v2[i]) return false;
        return true;
    }
};
