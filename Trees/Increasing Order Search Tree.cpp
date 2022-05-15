//  https://leetcode.com/problems/increasing-order-search-tree/
//  https://leetcode.com/submissions/detail/689600102/

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
    
    void buildIncreasingBST(TreeNode* node, TreeNode*& newRoot, TreeNode*& tail) {
        if(node == NULL) {
            return;
        }
        
        buildIncreasingBST(node -> left, newRoot, tail);
        
        if(newRoot == NULL) {
            newRoot = new TreeNode(node -> val);
            tail = newRoot;
        }else {
            tail -> right = new TreeNode(node -> val);
            tail = tail -> right;
        }
        
        tail -> left = NULL;
        tail -> right = NULL;
        
        buildIncreasingBST(node -> right, newRoot, tail);
    }
    
    TreeNode* increasingBST(TreeNode* root) {
        TreeNode* newRoot = NULL;
        TreeNode* tail = NULL;
        
        buildIncreasingBST(root, newRoot, tail);
        
        return newRoot;
    }
};
