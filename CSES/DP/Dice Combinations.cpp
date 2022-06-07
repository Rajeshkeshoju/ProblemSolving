/**
  * Bruteforce Recursive Solution [ TC: O(2^N), SC: O(N) ]
  * Solution should make it to Mod 10^9 + 1
**/
void countDiceCombinations(int n, int& count) {
    if(n == 0) {
        count++;
        return;
    }
    
    if(n < 0) {
        return;
    }
    
    for(int i=1; i<=6; i++) {
        countDiceCombinations(n-i, count);
    }
}


/**
  * Optimal Recursive solution using Memoization [ TC: O(N), SC:O(N) + O(N+1) ] 
  * Solution should make it to Mod 10^9 + 1
 **/
 
long long countDiceCombinations(long long n, vector<long long>& dp) {
    if(n == 0) {
        return dp[0] = 1;
    }
    
    if(n < 0) {
        return 0;
    }
    
    if(dp[n] != 0) {
        return dp[n];
    }
    
    for(int i=1; i<=6; i++) {
        (dp[n] += countDiceCombinations(n-i, dp)) %= MOD;
    }
    
    return dp[n];
}


/**
  * Optimal solution using Tabulation [ TC: O(N*6) ~= O(N), O(N+1) ]
  * Solution should make it to Mod 10^9 + 1
**/

int countDiceCombinations(int n) {
    vector<int> dp(n+1, 0);
    dp[0] = 1;
    
    // x is Subproblem sum or intermediate sum
    for(int x=1; x<=n; x++) {
        for(int i=1; i<=6; i++) {
            
            if(x - i < 0) {
                break;
            }
            
            dp[x] += dp[x-i];
        }
    }
    
    return dp[n];
}
