//  https://www.codechef.com/problems/LUCKFOUR

#include <iostream>
using namespace std;

long int getParticularDigitCount(long int number=0, int digitToCount=0){
    long int count = 0;
    
    while(number > 0){
        if(number%10 == digitToCount){
            count++;
        }
        number /= 10;
    }
    
    return count;
}

int main() {
    long int T = 0;
    cin>>T;
    
    if(1<=T && T<=100000){
        long int number = 0;
        
        while(T--){
            cin>>number;
            
            if(0<=number && number<=1000000000){
                cout<<getParticularDigitCount(number,4)<<endl;
            }
        }
    }
    
	return 0;
}
