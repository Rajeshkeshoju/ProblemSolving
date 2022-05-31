//  https://cses.fi/problemset/task/1069

#include <iostream>
using namespace std;

int longestSubsequence(string s) {
    int maxLength = 0;
    
    int i=0;
    int j=0;
    
    int n = s.length();
    
    while(i < n) {
        int j = i;
        
        while(j < n-1 && s[j] == s[j+1]) {
            j++;
        }
        
        maxLength = max(maxLength, j-i+1);
        i++;
    }
    
    return maxLength;
}

int main()
{
    string s = "";
    cin >> s;
    
    cout << longestSubsequence(s);

    return 0;
}
