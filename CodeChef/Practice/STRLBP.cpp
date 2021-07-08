//  https://www.codechef.com/problems/STRLBP

#include <iostream>
using namespace std;

int getNumberOfTransitions(string s){
    int numberOfTransitions = 0;
    
    for(int i=0; i<s.size()-1; i++){
        if(s[i] != s[i+1]){
            numberOfTransitions++;
        }
    }
    
    return numberOfTransitions;
}

int main() {
    
    int T = 0;
    cin>>T;
    
    if(1<=T && T<=256){
        string str = "";
        
        while(T--){
            cin >> str;
            
            if(getNumberOfTransitions(str) <= 2){
                cout << "uniform";
            }else{
                cout << "non-uniform";
            }
            cout << endl;
        }
    }
    
	return 0;
}
