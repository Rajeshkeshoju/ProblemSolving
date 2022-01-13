#include <iostream>
#include <cmath>
using namespace std;

bool isValid(char i){
    bool isDigit = (48 <= i && i <= 57);
    return isDigit;
}

int myStoI(string s){
    string numberString = "";
    bool isNegativeNumber = false;
    
    for(char i : s){
        if(i == '.'){
            break;
        }
        
        if(isValid(i)){
            numberString += i;
        }
        
        if(i == '-' && !isNegativeNumber){
            isNegativeNumber = true;
        }
    }
    
    int n = numberString.size();
    int power = n-1;
    int digit = 0;
    int number = 0;
    
    for(int i=0; i<n; i++){
        digit = numberString[i] - '0';
        number += digit * pow(10, power--);
    }
    
    if(isNegativeNumber){
        number *= -1;
    }
    
    return number;
}

int main()
{
    string s = "";
    getline(cin, s);
    
    cout << myStoI(s);

    return 0;
}
