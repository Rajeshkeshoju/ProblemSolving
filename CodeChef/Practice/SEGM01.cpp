//  https://www.codechef.com/problems/SEGM01

#include <iostream>
using namespace std;

bool canFormSingleNonEmptySegment(string s){
    bool flag = false;
    bool isOne = false;
    
    for(int i=0; i<s.size(); i++){
        if(s[i] == '1'){
            flag = true;
        }
        
        if(s[i] == '0' && flag){
            isOne = true;
        }
        
        if(s[i] == '0' && s[i+1] == '1' && isOne){
            return false;
        }
    }
    
    return flag;
}

int main() {
    int T = 0;
    cin>>T;
    
    if(1<=T && T<=10){
        string s = "";
        
        while(T--){
            cin >> s;
            
            if(1<=s.size() && s.size()<=100000){
                if(canFormSingleNonEmptySegment(s)){
                    cout << "YES";
                }else{
                    cout << "NO";
                }
                cout << endl;
            }
        }
    }
    
	return 0;
}
