//  https://www.codechef.com/problems/CHFGCD

#include <iostream>
using namespace std;

int gcd(int A, int B){
    if(!A){
        return B;
    }
    
    return gcd(B % A, A);
}

int getMinGCDOperationsToBePerformed(int X, int Y){
    int minOperations = 0;
    
    if(gcd(X, Y) > 1){
        return minOperations;
    }
    
    if(gcd(X+1, Y) > 1 || gcd(X, Y+1) > 1){
        minOperations = 1;
    }else{
        minOperations = 2;
    }
    
    return minOperations;
}

int main() {
	int T = 0;
	cin >> T;
	
	if(1<=T && T<=100000){
	   int X, Y;
	   
	   while(T--){
	       cin >> X >> Y;
	       
	       cout << getMinGCDOperationsToBePerformed(X, Y);
	       cout << endl;
	   }
	}
	
	return 0;
}
