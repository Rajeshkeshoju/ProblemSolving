//  https://www.codechef.com/problems/FLOW013

#include <iostream>
using namespace std;

int main() {
	
	int T;
	cin>>T;
	
	if(1<=T && T<=1000){
	    
	    while(T--){
	        
	        int A,B,C;
	        cin>>A>>B>>C;
	        
	        if((1<=A && A<=180) && (1<=B && B<=180) && (1<=C && C<=180)){
	            
	            if(A+B+C == 180){
	                cout<<"YES";
	            }else{
	                cout<<"NO";
	            }
	            cout<<endl;
	            
	        }
	        
	    }
	    
	}
	
	return 0;
}
