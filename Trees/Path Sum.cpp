//  https://leetcode.com/problems/path-sum/
//  https://leetcode.com/submissions/detail/690146974/

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
    
    bool hasPathSum(TreeNode* node, int targetSum, int sum) {
        if(node == NULL) {
            return false;
        }
        
        if(node -> left == NULL && node -> right == NULL) {
            sum += node -> val;
            if(sum == targetSum) {
                return true;
            }
            
            return false;
        }
        
        
        bool hasPath = hasPathSum(node -> left, targetSum, sum + node -> val);
        
        if(hasPath) {
            return true;
        }
        
        return hasPathSum(node -> right, targetSum, sum + node -> val);
    }
    
    bool hasPathSum(TreeNode* root, int targetSum) {
        
        if(root == NULL) {
            return false;
        }
        
        return hasPathSum(root, targetSum, 0);
    }
};
