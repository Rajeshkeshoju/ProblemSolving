//  https://www.codechef.com/problems/FLOW016

#include <iostream>
using namespace std;

long int greatestCommonDivisor(long int A, long int B){
    while(A != B){
        if(A > B){
            A -= B;
        }else if(A < B){
            B -= A;
        }
    }
    
    return A;
}

long int leastCommonMultiple(long int A, long int B){
    return (A*B)/greatestCommonDivisor(A,B);
}

int main() {
	
	int T=0;
	cin>>T;
	
	if(1<=T && T<=1000){
	    long int A=0, B=0;
	    
	    while(T--){
	        cin>>A>>B;
	        
	        if((1<=A && A<=1000000) && (1<=B && B<=1000000)){
	            cout<<greatestCommonDivisor(A,B)<<" ";
	            cout<<leastCommonMultiple(A,B)<<endl;
	        }
	    }
	}
	
	return 0;
}
