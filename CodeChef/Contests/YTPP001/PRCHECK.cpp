//  https://www.codechef.com/YTPP001/problems/PRCHECK

#include <iostream>
using namespace std;

bool isPrime(int number = 0){
    
    if(number <= 1){
        return false;
    }
    
    if((number == 2) || (number == 3)){
        return true;
    }
    
    if (number % 2 == 0 || number % 3 == 0){
        return false;
    }
        
    if(number % 2){
        for(int i=5; i*i<=number; i += 2){
            if(number % i == 0){
                return false;
            }
        }
    }
    
    return true;
}

int main() {
	int number = 0;
	cin >> number;
	
	if(1<=number && number<=1000000000){
	    cout << isPrime(number);
	}
	
	return 0;
}
