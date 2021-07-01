//  https://www.codechef.com/problems/FLOW004

#include <iostream>
using namespace std;

int getSumOfFirstAndLastDigit(long int N){
    int firstDigit = N;
    int lastDigit = 0;
    
    lastDigit = N % 10;
    
    while(firstDigit >= 10){
        firstDigit /= 10;
    }
    
    return firstDigit + lastDigit;
}

int main() {
	
	int T;
	cin>>T;
	
	if(1<=T && T<=1000){
	    
	    while(T--){
	        
	        long int N;
	        cin>>N;
	        
	        if(1<=N && N<=1000000){
	            cout<<getSumOfFirstAndLastDigit(N)<<endl;
	        }
	        
	    }
	    
	}
	
	return 0;
}
