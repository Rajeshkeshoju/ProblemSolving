//  https://leetcode.com/problems/range-sum-of-bst/
//  https://leetcode.com/submissions/detail/689592945/

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
    void rangeSum(TreeNode* node, int& sum, int& low, int& high) {
        if(node == NULL) {
            return;
        }
        
        int value = node -> val;
        if(low <= value && value <= high) {
            sum += value;
        }
        
        rangeSum(node -> left, sum, low, high);
        rangeSum(node -> right, sum, low, high);
    }
    
    int rangeSumBST(TreeNode* root, int low, int high) {
        int sum = 0;
        rangeSum(root, sum, low, high);
        
        return sum;
    }
};
