class Solution {
public:
    double avg(int sum, int count){
        return sum / (double) count;
    }
    
    double findMaxAverage(vector<int>& nums, int k) {
        int windowSum = 0;
        double maxAverage = 0.0;
        
        for(int i=0; i<k; i++){
            windowSum += nums[i];
        }
        
        int maxSum = windowSum;
        for(int i=k; i<nums.size(); i++){
            windowSum += nums[i] - nums[i-k];
            maxSum = max(maxSum, windowSum);
        }
        
        return avg(maxSum, k);
    }
};
