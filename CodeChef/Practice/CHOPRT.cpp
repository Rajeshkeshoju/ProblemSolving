//  https://www.codechef.com/problems/CHOPRT

#include <iostream>
using namespace std;

int main() {
	
	int T;
	cin>>T;
	
	if(1<=T && T<=10000){
	    
	    while(T--){
	        long int A=0,B=0;
    	    cin>>A>>B;
    	    
    	    if((1<=A && A<=1000000001) && (1<=B && B<=1000000001)){
    	        
    	        if(A == B){
    	            cout<<"=";
    	        }else if(A < B){
    	            cout<<"<";
    	        }else{
    	            cout<<">";
    	        }
    	        cout<<endl;
    	        
    	    } 
	    }
	    
	}
	
	return 0;
}
