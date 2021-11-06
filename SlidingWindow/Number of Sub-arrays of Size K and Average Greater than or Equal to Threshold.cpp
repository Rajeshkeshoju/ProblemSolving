//  https://leetcode.com/submissions/detail/582969042/

class Solution {
public:
    double avg(int sum, int n){
        return sum / (double) n;
    }
    
    int numOfSubarrays(vector<int>& arr, int k, int threshold) {
        int windowSum = 0;
        int numOfSubarrays = 0;
        
        for(int i=0; i<k; i++){
            windowSum += arr[i];
        }
        
        if(avg(windowSum, k) >= threshold){
            numOfSubarrays++;
        }
        
        int size = arr.size();
        
        for(int i=k; i<size; i++){
            windowSum += arr[i] - arr[i-k];
            
            if(avg(windowSum, k) >= threshold){
                numOfSubarrays++;
            }
        }
        
        return numOfSubarrays;
    }
};
