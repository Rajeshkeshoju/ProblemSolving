//  https://www.codechef.com/problems/ALPHABET

#include <iostream>
using namespace std;

string knownLetters = "";

bool isKnownLetter(string knownLetters, char letter){
    for(char i : knownLetters){
        if(i == letter){
            return true;
        }else{
            continue;
        }
    }
    
    return false;
}

bool canReadWord(string word){
    for(char i : word){
        if(!isKnownLetter(::knownLetters, i)){
            return false;
        }
    }
    
    return true;
}

int main() {
    cin >> ::knownLetters;
    
    if(1<=::knownLetters.length() && ::knownLetters.length()<=26){
        int numberOfWords = 0;
        cin >> numberOfWords;
        
        if(1<=numberOfWords && numberOfWords<=1000){
            string word = "";
            
            while(numberOfWords--){
                cin >> word;
                
                if(1<=word.length() && word.length()){
                    if(canReadWord(word)){
                        cout << "Yes";
                    }else{
                        cout << "No";
                    }cout << endl;
                }
            }
        }
    }
    
	return 0;
}
