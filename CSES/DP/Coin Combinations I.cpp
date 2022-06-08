//  https://cses.fi/problemset/task/1635/

/**
  *   Recursive solution [ TC:O(2^N), SC:O(N) ]
 **/

int getCoinCombinations(int* arr, int n, int k) {
    if(k == 0) {
        return 1;
    }
    
    if(k < 0) {
        return 0;
    }
    
    int count = 0;
    for(int i=0; i<n; i++) {
        count += getCoinCombinations(arr, n, k-arr[i]);
    }
    
    return count;
}


/**
  * Tabulation Solution [ TC:O(N * target), SC:O(target+1) ]
 **/
int getCoinCombinations(int* arr, int n, int target, vector<int> dp) {
    dp[0] = 1;
    
    for(int i=1; i<=target; i++) {
        for(int j=0; j<n; j++) {
            
            if(i - arr[j] >= 0) {
                (dp[i] += dp[i-arr[j]]) %= MOD; // MOD = 1000000007
            }
        }
    }
    
    return dp[target];
}
