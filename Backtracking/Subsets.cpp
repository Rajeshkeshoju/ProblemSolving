//  https://leetcode.com/problems/subsets/
//  https://leetcode.com/submissions/detail/689618364/

class Solution {
public:
    void getSubsets(vector<vector<int>>& subsets, vector<int> v, vector<int>& nums, int i=0) {
        if(i >= nums.size()) {
            subsets.push_back(v);
            return;
        }
        
        getSubsets(subsets, v, nums, i+1);
        v.push_back(nums[i]);
        getSubsets(subsets, v, nums, i+1);
    }
    
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> subsets;
        vector<int> v;
        
        getSubsets(subsets, v, nums);
        
        return subsets;
    }
};
