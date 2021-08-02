//  https://www.codechef.com/YTPP001/problems/NUMPLIN

#include <iostream>
using namespace std;

int isPalindrome(int number = 0){
    int reversedNumber = 0;
    int rem = 0;
    int temp = number;
    
    while(temp > 0){
        rem = temp % 10;
        reversedNumber = reversedNumber * 10 + rem;
        temp /= 10;
    }
    
    return reversedNumber == number;
}

int main() {
	int number = 0;
	cin >> number;
	
	if(1<=number && number<=1000000){	    
	    if(isPalindrome(number)){
	        cout << "YES";
	    }else{
	        cout << "NO";
	    }
	    cout << endl;
	}
	
	return 0;
}
