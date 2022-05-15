//  https://leetcode.com/problems/maximum-depth-of-binary-tree/
//  https://leetcode.com/submissions/detail/689603130/

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
    int findDepth(TreeNode* node) {
        if(node == NULL) {
            return 0;
        }
        
        return 1 + max(findDepth(node -> left), findDepth(node -> right));
    }
    
    int maxDepth(TreeNode* root) {
        return findDepth(root);
    }
};
