//  https://www.codechef.com/problems/HOOPS

#include <iostream>
#include <cmath>

using namespace std;

int main() {
	
	int T = 0;
	cin>>T;
	
	if(1<=T && T<=100000){
	    int N = 0;
	    
	    while(T--){
	        cin>>N;
	        
	        if(1<=N && N<=200000 && N%2){
	            cout<<ceil((float)N/2);
	            cout<<endl;
	        }
	    }
	}
	return 0;
}
