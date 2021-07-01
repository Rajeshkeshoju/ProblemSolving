//  https://www.codechef.com/problems/TRISQ

#include <iostream>
using namespace std;

int fitSquresInTriangle(int base=0){
    base -= 2;
    base /= 2;
    
    return base * (base + 1)/2;
}

int main() {
    
    int T=0;
    cin>>T;
    
    if(1<=T && T<=1000){
        int base = 0;
        
        while(T--){
            cin>>base;
            
            if(1<=base && base<=10000){
                cout<<fitSquresInTriangle(base)<<endl;
            }
        }
    }
	return 0;
}
