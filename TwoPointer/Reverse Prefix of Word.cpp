//  https://leetcode.com/submissions/detail/582997780/

class Solution {
public:
    void swap(char& a, char& b){
        a = a + b;
        b = a - b;
        a = a - b;
    }
    
    string reversePrefix(string word, char ch) {
        int i = 0;
        int j = 0;
        
        for(char i: word){
            if(i != ch){
                j++;
            }else{
                break;
            }
        }
        
        if(j >= word.length()){
            return word;
        }
        
        for(; i<j; i++, j--){
            swap(word[i], word[j]);
        }
        
        return word;
    }
};
