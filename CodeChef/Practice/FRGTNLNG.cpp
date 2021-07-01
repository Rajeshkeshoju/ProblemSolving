//  https://www.codechef.com/problems/FRGTNLNG

#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

vector<string> forgottenWords;

vector<string> isForgettenWordStillInUse(vector<string> modernPhrases){
    vector<string> result;
    
    for(int i=0; i<forgottenWords.size(); i++){
        if( find(modernPhrases.begin(), modernPhrases.end(), forgottenWords[i]) != modernPhrases.end()){
            result.push_back("YES");
        }else{
            result.push_back("NO");
        }
    }
    
    return result;
}

int main() {
    
    int T = 0;
    cin>>T;
    
    if(1<=T && T<=20){
        
        while(T--){
            int numberOfForgettenWords = 0;
            int numberOfModernPhrases = 0;
            
            cin>>numberOfForgettenWords;
            cin>>numberOfModernPhrases;
            
            for(int i=0; i<numberOfForgettenWords; i++){
                string word = "";
                cin>>word;
                
                forgottenWords.push_back(word);
            }
            
            int modernPhrasesCount = 0;
            vector<string> modernPhrases;
            
            while(numberOfModernPhrases--){
                cin>>modernPhrasesCount;
                
                while(modernPhrasesCount--){
                    string phrase = "";
                    cin>>phrase;
                    
                    modernPhrases.push_back(phrase);
                }
            }
            
            vector<string> result = isForgettenWordStillInUse(modernPhrases);
            for(int i=0; i<result.size(); i++){
                cout<<result[i]<<" ";
            }cout<<endl;
            
            forgottenWords.clear();
        }
    }
    
	return 0;
}
