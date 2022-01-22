#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    bool isPalindrome(string s) {
        if(s.size() == 0) {
            return false;
        }
        
        if(s.size() == 1) {
            return true;
        }
        
        int start = 0;
        int end = s.size()-1;
        
        bool isPalindrome = true;
        
        while(start < end) {
            if(s[start++] != s[end--]){
                return isPalindrome = false;
            }
        }
        
        return isPalindrome;
    }
    
    vector<string> generatePermutaions(vector<string> permutations, string S, string s, int i, int n) {
        if(i >= n) {
            if(isPalindrome(s)) {
                permutations.push_back(s);
            }
            
            return permutations;
        }
        
        s += S[i];
        permutations = generatePermutaions(permutations, S, s, i+1, n);
        s.pop_back();
        permutations = generatePermutaions(permutations, S, s, i+1, n);
        
        return permutations;
    }
  
    vector<string> allPalindromicPerms(string S) {
        vector<string> result;
        result = generatePermutaions(result, S, "", 0, S.size());
        
        return result;
    }
};

int main() {
    int t;
    cin >> t;
    while (t--) {
        string S;
        
        cin>>S;

        Solution ob;
        vector<string> ptr = ob.allPalindromicPerms(S);
        
        for(auto it : ptr) {
            cout << it << "\n";
        }
    }
    return 0;
}
