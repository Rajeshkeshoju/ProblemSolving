//  https://www.codechef.com/problems/PRB01

#include <iostream>
#include <cmath>

using namespace std;

int isPrime(long int N = 0){
    int flag = 1;
    
    for(long int i=2; i<=sqrt(N); i++){
        if(N%i == 0){
            flag = 0;
            break;
        }
    }
    
    return flag == 1;
}

int main() {
	int T = 0;
	cin>>T;
	
	if(1<=T && T<=20){
	    
	    while(T--){
	        long int N = 0;
	        cin>>N;
	        
	        if(1<=N && N<=100000){
	            if(isPrime(N) && N>1){
	                cout<<"yes";
	            }else{
	                cout<<"no";
	            }
  
	            cout<<endl;
	        }
	    }
	}
	
	return 0;
}
