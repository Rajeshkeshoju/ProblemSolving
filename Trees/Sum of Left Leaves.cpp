//  https://leetcode.com/problems/sum-of-left-leaves/
//  https://leetcode.com/submissions/detail/689591469/

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
    void sumLeftLeaves(TreeNode* node, int& sum) {
        if(node == NULL) {
            return;
        }
        
        if(node -> left != NULL && node -> left -> left == NULL && node -> left -> right == NULL) {
            sum += node -> left -> val;
            sumLeftLeaves(node -> right, sum);
        }else {
            sumLeftLeaves(node -> left, sum);
            sumLeftLeaves(node -> right, sum);
        }
    }
    
    int sumOfLeftLeaves(TreeNode* root) {
        int sum = 0;
        sumLeftLeaves(root, sum);
        
        return sum;
    }
};
