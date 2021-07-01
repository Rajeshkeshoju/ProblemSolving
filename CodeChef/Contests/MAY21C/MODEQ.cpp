//  https://www.codechef.com/MAY21C/problems/MODEQ

#include <iostream>
using namespace std;

long long getNumberOfOrderedPairs(long long N=0, long long M=0){
    
    long long pairsCount = 0;
    
    for(long long b=1; b<=N; b++){
        for(long long a=1; a<b; a++){
            
            bool isPair = ((M%a) % b) == ((M%b) % a);
            
            if(isPair){
                pairsCount++;
            }
            
        }
    }
    
    return pairsCount;
}

int main() {
	
	int T = 0;
	cin>>T;
	
	if(1<=T && T<=1000){
	    long long N=0, M=0;
	    
	    while(T--){
	        cin>>N>>M;
	        
	        if((2<=N && N<=1000000) && (1<=M && M<=500000)){
	            
	            cout<<getNumberOfOrderedPairs(N, M)<<endl;
	        }
	    }
	}
	
	return 0;
}
