//  https://www.codechef.com/problems/UWCOI21A

#include <iostream>
using namespace std;

int main() {
	int T = 0;
	cin >> T;
	
	if(1<=T && T<=100000){
	    int number = 0;
	    
	    while (T--) {
	        cin >> number;
	        
	        if(number % 2){
	            cout << 1 << " " << number;
	        }else{
	            cout << 2 << " " << number / 2;
	        }
	        cout << endl;
	    }
	}
  
	return 0;
}
