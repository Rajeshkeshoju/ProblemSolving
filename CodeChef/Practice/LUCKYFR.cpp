//  https://www.codechef.com/problems/LUCKYFR

#include <iostream>
using namespace std;

int getDigitOccurences(int number=0, int digit=0){
    int digitOccurences = 0;
    
    while(number > 0){
        if((number % 10) == digit){
            digitOccurences++;
        }
        number /= 10;
    }
    
    return digitOccurences;
}

int main() {
	
	int T = 0;
	cin>>T;
	
	if(1<=T && T<=100000){
	    int number = 0;
	    
	    while(T--){
	        cin>>number;
	        
	        if(0<=number && number<=1000000000){
	            cout<<getDigitOccurences(number, 4);
	            cout<<endl;
	        }
	    }
	}
	return 0;
}
