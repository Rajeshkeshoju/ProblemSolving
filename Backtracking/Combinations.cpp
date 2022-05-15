//  https://leetcode.com/problems/combinations/
//  https://leetcode.com/submissions/detail/684098073/

class Solution {
public:
    
    void getCombinations(vector<vector<int>>& result, vector<int> v, int& n, int k, int i=0){
        if(k <= 0) {
            result.push_back(v);
            return;
        }
        
        for(int x=i+1; x<=n; x++) {
            v.push_back(x);
            getCombinations(result, v, n, k-1, x);
            v.pop_back();
        }
    }
    
    vector<vector<int>> combine(int n, int k) {
        
        vector<vector<int>> result;
        getCombinations(result, vector<int>(), n, k);
        
        return result;
    }
};
