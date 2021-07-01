//  https://www.codechef.com/problems/URCALC

#include <iostream>
using namespace std;

struct Operators{
    
    char addition = '+';
    char subtraction = '-';
    char multiplication = '*';
    char division = '/';
}operators;

int isValidOperator(char operatorSymbol){
    return (    operatorSymbol == operators.addition
            ||  operatorSymbol == operators.subtraction
            ||  operatorSymbol == operators.multiplication
            ||  operatorSymbol == operators.division);
}

int isValidNumber(int number){
    return -1000<=number && number<=1000;
}

int addNumbers(int firstNumber, int secondNumber){
    return firstNumber + secondNumber;
}

int subtractNumbers(int firstNumber, int secondNumber){
    return firstNumber - secondNumber;
}

int multiplyNumbers(int firstNumber, int secondNumber){
    return firstNumber * secondNumber;
}

double divideNumbers(int firstNumber, int secondNumber){
    return firstNumber / (double)secondNumber;
}

int main() {
    
    int firstNumber = 0;
    int secondNumber = 0;
    char operatorSymbol;
    
    cin>>firstNumber;
    cin>>secondNumber;
    cin>>operatorSymbol;
    
    if(     isValidOperator(operatorSymbol) 
        &&  isValidNumber(firstNumber) 
        &&  isValidNumber(secondNumber)
        &&  secondNumber != 0){
        
        if(operatorSymbol == operators.addition){
            
            cout << addNumbers(firstNumber, secondNumber);
            
        }else if(operatorSymbol == operators.subtraction){
            
            cout << subtractNumbers(firstNumber, secondNumber);
            
        }else if(operatorSymbol == operators.multiplication){
            
            cout << multiplyNumbers(firstNumber, secondNumber);
            
        }else{
            
            cout.precision(6);
            cout << fixed;
            cout << divideNumbers(firstNumber, secondNumber);
        }
        cout<<endl;
    }
    
	return 0;
}
