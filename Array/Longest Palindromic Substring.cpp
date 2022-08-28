#include <bits/stdc++.h>
using namespace std;


bool isPalindrome(string str, int i, int j) {
    if(i >= j) {
        return true;
    }
    
    if(str[i] != str[j]) {
        return false;
    }
    
    return isPalindrome(str, i+1, j-1);
}

string longestPalindromicSubstring(string str) {
    string longestPalindome = "";
    
    int maxLength = INT_MIN;
    string word = "";
    int n = str.length();
    
    for(int i=0; i<n; i++) {
        word = "";
        
        for(int j=i; j<n; j++) {
            word += str[j];
            
            if(isPalindrome(word, 0, word.length()-1)) {
                if(maxLength < j-i+1) {
                    maxLength = j-i+1;
                    longestPalindome = word;
                }
            }
        }
    }
    
    return longestPalindome;
}

int main()
{
    string str = "";
    cin >> str;
    
    cout << longestPalindromicSubstring(str);

    return 0;
}
