//  https://www.codechef.com/problems/FLOW008

#include <iostream>
using namespace std;

int main() {
	
	int T;
	cin>>T;
	
	if(1<=T && T<=1000){
	    
	    while(T--){
	        
	        int N;
	        cin>>N;
	        
	        if(-20<=N && N<=20){
	            
	            if(N < 10){
	                cout<<"Thanks for helping Chef!";
	            }else{
	                cout<<-1;
	            }
	            cout<<endl;
	        }
	        
	    }
	    
	}
	
	return 0;
}
