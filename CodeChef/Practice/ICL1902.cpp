//  https://www.codechef.com/problems/ICL1902

#include <iostream>
#include <cmath>
using namespace std;

int getNumberOfSquares(int N = 0){
    int count = 0;
    while(N > 0){
        N -= pow(int(sqrt(N)), 2);
        count++;
    }
    
    return count;
}

int main() {
    
    int T = 0;
    cin>>T;
    
    if(1<=T && T<=1000){
        int N=0;
    
        while(T--){
            cin>>N;
            
            if(1<=N && N<=1000){
                cout<<getNumberOfSquares(N)<<endl;
            }
        }
    }
        
    
	return 0;
}
