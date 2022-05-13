//  https://leetcode.com/submissions/detail/696763463/

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
    void getGoodCount(TreeNode* node, int max, int& count) {
        if(node == NULL) {
            return;
        }
        
        if(node -> val >= max) {
            count++;
            max = node -> val;
        }
        
        getGoodCount(node -> left, max, count);
        getGoodCount(node -> right, max, count);
    }
    
    int goodNodes(TreeNode* root) {
        int count = 0;
        int max = root -> val;
        
        getGoodCount(root, max, count);
        
        return count;
    }
};
