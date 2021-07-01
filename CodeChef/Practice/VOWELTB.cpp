//   https://www.codechef.com/problems/VOWELTB

#include <iostream>
using namespace std;

bool isVowel(char character){
    char vowels[] = {'A','E','I', 'O', 'U'};
    
    for(char i: vowels){
        if(character == i){
            return true;
        }
    }
    return false;
}

int main() {
	
	char character;
	cin>>character;
	
	if('A'<=character && character<='Z'){
	    if(isVowel(character)){
	        cout<<"Vowel";
	    }else{
	        cout<<"Consonant";
	    }cout<<endl;
	}
	
	return 0;
}
