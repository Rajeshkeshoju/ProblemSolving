//  https://leetcode.com/problems/permutations/
//  https://leetcode.com/submissions/detail/689613480/

class Solution {
public:
    
    void getPermute(vector<vector<int>>& permutations, vector<int> p, vector<int>& nums, vector<int>& included) {
        if(p.size() == nums.size()) {
            permutations.push_back(p);
            return;
        }
        
        for(int i=0; i<nums.size(); i++) {
            if(!included[i]) {
                included[i] = 1;
                
                p.push_back(nums[i]);
                getPermute(permutations, p, nums, included);
                
                p.pop_back();
                included[i] = 0;
            }
        }
    }
    
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> permutations;
        vector<int> included(nums.size(), 0);
        
        getPermute(permutations, vector<int>(), nums, included);
        
        return permutations;
    }
};
