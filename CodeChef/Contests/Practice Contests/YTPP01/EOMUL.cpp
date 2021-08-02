//  https://www.codechef.com/YTPP001/problems/EOMUL

#include <iostream>
using namespace std;

int checkNumberIsOddOrEvenMultiple(int number, int mainNumber = 0){
    const int FLAG_FOR_NUM_NOT_DIVISIBLE    = -1;
    const int FLAG_FOR_NUM_ODD_MULTIPLE     =  1;
    const int FLAG_FOR_NUM_EVEN_MULTIPLE    =  0;
    
    if((number % mainNumber) == 0){
        if((number % 2)){
            return FLAG_FOR_NUM_ODD_MULTIPLE;
        }
        
        return FLAG_FOR_NUM_EVEN_MULTIPLE;
    } 
    
    return FLAG_FOR_NUM_NOT_DIVISIBLE;
}

int main() {
	int number = 0;
	cin >> number;
	
	if(1<=number && number<=1000000){
	    cout << checkNumberIsOddOrEvenMultiple(number, 3);
	}
	return 0;
}
