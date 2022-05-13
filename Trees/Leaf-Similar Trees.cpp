//  https://leetcode.com/submissions/detail/691072087/

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
    void findLeaves(TreeNode* node, vector<int>& leafs) {
        if(node -> left == NULL && node -> right == NULL) {
            leafs.push_back(node -> val);
            return;
        }
        
        if(node -> left) {
            findLeaves(node -> left, leafs);
        }
        
        if(node -> right) {
            findLeaves(node -> right, leafs);
        }
    }
    
    bool leafSimilar(TreeNode* root1, TreeNode* root2) {
        vector<int> leafs1;
        findLeaves(root1, leafs1);
        
        vector<int> leafs2;
        findLeaves(root2, leafs2);
        
        return leafs1 == leafs2;
    }
};
