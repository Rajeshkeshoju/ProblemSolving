//  https://leetcode.com/problems/univalued-binary-tree/
//  https://leetcode.com/submissions/detail/689605213/

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
    
    bool isUnivalueTree(TreeNode* node, int& value) {
        if(node == NULL) {
            return true;
        }
        
        if(node -> val != value) {
            return false;
        }
        
        bool isUnivalue = isUnivalueTree(node -> left, value);
        
        if(!isUnivalue) {
            return false;
        }
        
        return isUnivalueTree(node -> right, value);
    }
    
    bool isUnivalTree(TreeNode* root) {
        int value = root -> val;
        
        return isUnivalueTree(root, value);
    }
};
