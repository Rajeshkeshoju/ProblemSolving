//  https://www.codechef.com/RLIF2021/problems/ISOMER

#include <bits/stdc++.h>

#define ll long long

using namespace std;

int main() {
    ll T = 0;
    cin>>T;
    
    if(1<=T && T<=1000000){
        int numberOfCarbons = 0;
        
        ll isomers[] = {
            0,1,1,1,2,3,5,9,18,35,
            75,159,355,802,1858,4347,10359,24894,60523,148284,366319
        };
        
        while(T--){
            cin>>numberOfCarbons;
            
            if(0<=numberOfCarbons && numberOfCarbons<=20){
                cout<<isomers[numberOfCarbons]<<endl;
            }
        }
    }
    
	return 0;
}
