class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        int size = 2 * n;
        vector<int> ans(size);
        int k = 0;
        
        for(int i=0, j=size/2; i<size/2,j<size; i++, j++){
            ans[k++] = nums[i];
            ans[k++] = nums[j];
        }
        
        return ans;
    }
};   
