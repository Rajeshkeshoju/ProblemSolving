//  https://www.codechef.com/problems/FRUITS

#include <iostream>
#include <cmath>
using namespace std;

int getFruitsDifference(int N=0, int M=0, int K=0){
    int result =  abs(N - M) - K;
    
    if(result > 0){
        return result;
    }
    
    return 0;
}

int main() {
    int T = 0;
    cin>>T;
    
    if(1<=T && T<=100){
        int N=0, M=0, K=0;
        
        while(T--){
            cin>>N>>M>>K;
            
            cout<<getFruitsDifference(N,M,K)<<endl;
        }
    }
    
	return 0;
}
