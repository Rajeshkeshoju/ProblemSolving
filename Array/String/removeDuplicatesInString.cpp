#include <iostream>
#include <set>

using namespace std;

void removeDuplicatesInString(string& word){
    set<char> set;
    
    for(char i : word){
        set.insert(i);
    }
    
    int length = word.length();
    int k = 0;
    char ch;
    
    for(int i=0; i<length; i++){
        ch = word[i];
        
        if(set.empty()){
            break;
        }
        
        if(set.count(ch)){
            word[k++] = ch;
            set.erase(ch);
        }
        
    }
    
    word.erase(k);
}

int main(){
    string word = "";
    cin >> word;
    
    removeDuplicatesInString(word);
    
    for(char i : word){
        cout << i;
    }
    
    return 0;
}
