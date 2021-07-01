//  https://www.codechef.com/problems/TWOSTR

#include <iostream>
using namespace std;

bool isValidString(string s, char wildCardCharacter){
    bool validString = false;
    
    for(int i=0; i<s.length(); i++){
        if(('a'<=s[i] && s[i]<='z') || s[i] == wildCardCharacter){
            validString = true;
        }else{
            validString = false;
            break;
        }
    }
    
    return validString;
}

bool isWildCardMatches(string s1, string s2, char wildCardCharacter){
    
    if(s1.length() == s2.length()){
        for(int i=0; i<s1.length(); i++){
            if((s1[i] == s2[i]) || ((s1[i] == wildCardCharacter) || (s2[i] == wildCardCharacter))){
                continue;
            }else{
                return false;
            }
        }
        return true;
    }
    
    return false;
}

int main() {
    
    int T = 0;
    cin>>T;
    
    if(1<=T && T<=50){
        string firstString = "";
        string secondString = "";
        
        while(T--){
            cin>>firstString;
            cin>>secondString;
            
            int firstStringConstraint = 1<=firstString.length() && firstString.length()<=10;
            int secondStringConstraint = 1<=secondString.length() && secondString.length()<=10;
            
            if(firstStringConstraint && secondStringConstraint){
                char wildCardCharacter = '?';
                
                if( isValidString(firstString, wildCardCharacter) 
                    && isValidString(secondString,wildCardCharacter)){
                        
                        if(isWildCardMatches(firstString, secondString, wildCardCharacter)){
                            cout<<"Yes";
                        }else{
                            cout<<"No";
                        }cout<<endl;
                    }
            }
        }
    }
    
	return 0;
}
