//  https://leetcode.com/problems/binary-tree-paths/
//  https://leetcode.com/submissions/detail/667556404/

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
    void getPaths(TreeNode* root, vector<string>& binaryTreePaths, string path) {
        
        if(!root -> left && !root -> right) {
            path += to_string(root -> val);
            binaryTreePaths.push_back(path);
            
            return;
        }
        
        path = path + to_string(root -> val) + "->";
        
        if(root -> left) {
            getPaths(root -> left, binaryTreePaths, path);
        }
        
        if(root -> right) {
            getPaths(root -> right, binaryTreePaths, path);
        }
    }
    
    vector<string> binaryTreePaths(TreeNode* root) {
        vector<string> binaryTreePaths;
        getPaths(root, binaryTreePaths, "");
        
        return binaryTreePaths;
    }
};
