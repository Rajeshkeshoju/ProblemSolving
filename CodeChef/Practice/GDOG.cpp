//  https://www.codechef.com/problems/GDOG

#include <iostream>
using namespace std;

long int getMaxPossibleCoins(long int N=0, long int K=0){
    long int maxCoins = 0;
    
    for(long int i=1; i<=K; i++){
        if(maxCoins < N%i){
            maxCoins = N%i;
        }
    }
    
    return maxCoins;
}

int main() {
    int T = 0;
    cin>>T;
    
    if(1<=T && T<=50){
        long int N=0, K=0;
        
        while(T--){
            cin>>N>>K;
            
            if((1<=N && N<=100000) && (1<=K && K<=100000)){
                cout<<getMaxPossibleCoins(N,K)<<endl;
            }
        }
    }
    
	return 0;
}
