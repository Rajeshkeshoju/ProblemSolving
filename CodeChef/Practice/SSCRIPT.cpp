//  https://www.codechef.com/problems/SSCRIPT

#include <iostream>
using namespace std;

int doesContainStrongLanguage(string s, int stringLength, int minimumConsecutiveChars){
    int repeatedCharCount = 0;
    
    for(int i=0; i<stringLength; i++){
        if(s[i] == '*'){
            repeatedCharCount++;
        }else{
            repeatedCharCount = 0;
        }
        
        if(repeatedCharCount >= minimumConsecutiveChars){
            return true;
        }
    }
    
    return false;
}

int main() {
	
	int T = 0;
	cin >> T;
	
	if(1<=T && T<=10){
	    int stringLength = 0;
	    int minimumConsecutiveChars = 0;
	    
	    while(T--){
	        cin >> stringLength;
	        cin >> minimumConsecutiveChars;
	        
	        string s;
	        cin >> s;
	        if(doesContainStrongLanguage(s, stringLength, minimumConsecutiveChars)){
	            cout << "YES";
	        }else {
	            cout << "NO";
	        }
	        cout << endl;
	    }
	}
	return 0;
}
