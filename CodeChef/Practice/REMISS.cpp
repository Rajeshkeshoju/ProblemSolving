//  https://www.codechef.com/problems/REMISS

#include <iostream>
using namespace std;

int main() {
	
	int T;
	cin>>T;
	
	if(1<=T && T<=100){

	    while(T--){
	        
	        long int A,B;
	        cin>>A>>B;
	        
	        if((0<=A && A<=1000000) && (0<=B && B<=1000000)){
	            
	            if(A >= B){
	                cout<<A;
	            }else{
	                cout<<B;
	            }
	            cout<<" "<<A+B<<endl;
	            
	        }
	        
	    }
	    
	}
	
	return 0;
}
