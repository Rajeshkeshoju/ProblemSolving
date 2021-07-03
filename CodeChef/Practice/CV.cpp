//  https://www.codechef.com/problems/CV

#include <iostream>
using namespace std;

bool isVowel(char character){
    string vowels = "aeiou";
    bool isVowel = false;
    
    for(char i: vowels){
        if(i == character){
            isVowel = true;
            break;
        }
    }
    
    return isVowel;
}

int getAdjacentVowelConstantCount(string s, int length){
    int adjacentCount = 0;
    
    for(int i=0; i<length-1; i++){
        if(!isVowel(s[i]) && isVowel(s[i+1])){
            adjacentCount++;
        }
    }
    
    return adjacentCount;
}

int main() {
	
	int T = 0;
	cin >> T;
	
	if(1<=T && T<=100){
	    int N = 0;
	    string s = "";
	    
	    while(T--){
	        cin >> N;
	        
	        if(1<=N && N<=100){
	            cin >> s;
    	        
    	        cout << getAdjacentVowelConstantCount(s, N);
    	        cout << endl;
	        }
	    }
	}
	return 0;
}
