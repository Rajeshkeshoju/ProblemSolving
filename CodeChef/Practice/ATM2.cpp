//  https://www.codechef.com/problems/ATM2

#include <iostream>
using namespace std;

int isWithdrawPossible(long int amountInATM=0, long int amount=0){
    return amountInATM >= amount;
}

int main() {
    int T=0;
    cin>>T;
    
    if(1<=T && T<=100){
        int N=0;
        long int K = 0;
        
        while(T--){
            cin>>N>>K;
        
            if((1<=N && N<=100) && (1<=K && K<=1000000)){
                long int amount = 0;
                
                while(N--){
                    cin>>amount;
                    
                    if(1<=amount && amount<=1000000){
                        if(isWithdrawPossible(K, amount)){
                            K -= amount;
                            cout<<1;
                        }else{
                            cout<<0;
                        }
                    }
                }
                cout<<endl;
            }
        }
    }
    
	return 0;
}
