//  https://www.codechef.com/problems/PPSUM

#include <iostream>
using namespace std;

int sum(int D, int N){
    D--;
    int s = N;
    
    while(N--){
        s += N;
    }
    
    if(D){
        sum(D,s);
    }else{
        return s;
    }
}

int main() {
	
	int T=0, D=0, N=0;
	cin>>T;
	
	if(1<=T && T<=16){
	    
	    while(T--){
	        cin>>D>>N;
	        
	        if((1<=D && D<=4) && (1<=N && N<=4)){
	            cout<<sum(D,N)<<endl;
	        }
	    }
	    
	}
	
	return 0;
}
