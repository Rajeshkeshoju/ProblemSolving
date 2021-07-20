//  https://www.codechef.com/problems/EVENTUAL

#include <iostream>
#include <algorithm>
using namespace std;

bool isPossibleToEraseWholeString(string str, int lengthOfString = 0){
    bool isPossibleToEraseWholeString = false;
    
    if(lengthOfString % 2){
        return isPossibleToEraseWholeString;
    }
    
    sort(str.begin(), str.end());
    
    for(int i=0; i<lengthOfString - 1; i+=2){
        if(str[i] != str[i+1]){
            isPossibleToEraseWholeString = false;
            break;
        }
        
        isPossibleToEraseWholeString = true;
    }
    
    return isPossibleToEraseWholeString;
}

int main() {
	int T = 0;
	cin >> T;
	
	if(1<=T && T<=200){
	    int lengthOfString = 0;
	    string str = "";
	    
	    while(T--){
	        cin >> lengthOfString;
	        cin >> str;
	        
	        isPossibleToEraseWholeString(str, lengthOfString) ? cout << "YES" : cout << "NO";
	        cout << endl;
	    }
	}
	
	return 0;
}
