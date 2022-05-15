//  https://leetcode.com/problems/combination-sum/
//  https://leetcode.com/submissions/detail/683900515/

class Solution {
public:
    
    void getCombinations(vector<vector<int>>& combinations, vector<int> v, vector<int>& candidates, int& target, int sum = 0) {
        if(target == sum) {
            sort(v.begin(), v.end());
            combinations.push_back(v);
            
            return;
        }
        
        if(target < sum) {
            return;
        }
        
        for(int i=0; i<candidates.size(); i++) {
            v.push_back(candidates[i]);
            getCombinations(combinations, v, candidates, target, sum+candidates[i]);

            v.pop_back();
        }
    }
    
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> combinations;
        
        getCombinations(combinations, vector<int>(), candidates, target);
        
        set<vector<int>> uniqueCombinations(combinations.begin(), combinations.end());
        combinations.assign(uniqueCombinations.begin(), uniqueCombinations.end());
        
        return combinations;
    }
};
