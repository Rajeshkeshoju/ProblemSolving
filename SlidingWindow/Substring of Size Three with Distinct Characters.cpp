class Solution {
public:
    bool isGoodString(string s){
        bool isGoodString = true;
        
        int length = s.length();
        for(int i=0; i<length; i++){
            for(int j=0; j<length; j++){
                if(i != j){
                    if(s[i] == s[j]){
                        isGoodString = false;
                        break;
                    }
                }
            }
            
            if(!isGoodString){
                break;
            }
        }
        
        return isGoodString;
    }
    
    int countGoodSubstrings(string s) {
        int k = 3;
        int count = 0;
        
        if(s.length() < 3){
            return count;
        }
        
        for(int i=0; i<s.length()-k+1; i++){
            if(isGoodString(s.substr(i,k))){
                count++;
            }
        }
        
        return count;
    }
};
