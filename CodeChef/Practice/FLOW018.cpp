//  https://www.codechef.com/problems/FLOW018

#include <iostream>
using namespace std;

int main() {
	
	int T;
	cin>>T;
	
	if(1<=T && T<=1000){
	    
	    while(T--){
	        
	        int N;
	        cin>>N;
	        
	        if(0<=N && N<=20){
	            
	            long int factorial = 1;
	            while(N > 1){
	                factorial *= N--;
	            }
	            
	            cout<<factorial<<endl;
	            
	        }
	        
	    }
	    
	}
	
	return 0;
}
