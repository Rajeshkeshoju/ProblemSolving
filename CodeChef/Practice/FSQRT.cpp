//  https://www.codechef.com/problems/FSQRT

#include <iostream>
#include <cmath>

using namespace std;

int main() {
	
	int T;
	cin>>T;
	
	if(1<=T && T<=20){
	    
	    while(T--){
	        
	        int N;
	        cin>>N;
	        
	        if(1<=N && N<=10000){
	            cout<<floor(sqrt(N))<<endl;
	        }
	        
	    }
	    
	}
	
	return 0;
}
