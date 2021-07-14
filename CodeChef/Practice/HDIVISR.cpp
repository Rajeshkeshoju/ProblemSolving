//  https://www.codechef.com/problems/HDIVISR

#include <iostream>
using namespace std;

int main() {
	int number = 0;
	cin >> number;
	
	if(2<=number && number<=1000){
	    for(int i=10; i>0; i--){
	        if(number % i == 0){
	            cout << i;
	            break;
	        }
	    }
	}
  
	return 0;
}
