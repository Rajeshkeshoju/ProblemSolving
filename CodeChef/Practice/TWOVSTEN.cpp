//  https://www.codechef.com/problems/TWOVSTEN

#include <iostream>
using namespace std;

int getMinimumCount(long int number){
    
    if(number % 10 == 0){
        return 0;
    }
    
    if(number % 5 == 0){
        return 1;
    }
    
    return -1;
}

int main() {
	
	int T = 0;
	cin>>T;
	
	if(1<=T && T<=1000){
	    
	    long int X = 0;
	    
	    while(T--){
	        cin>>X;
	    
    	    if(0<=X && X<=1000000000){
    	        cout<<getMinimumCount(X)<<endl;
    	    }
	        
	    }
	    
	}
	
	return 0;
}
