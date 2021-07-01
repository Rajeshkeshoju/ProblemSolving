//  https://www.codechef.com/problems/MATCHES

#include <iostream>
using namespace std;

long int getTotalMatches(long int number=0){
    long int totalMatches = 0;
    int matches[] = {6,2,5,5,4,5,6,3,7,6};
    int digit = 0;
    
    while(number > 0){
        digit = number % 10;
        totalMatches += matches[digit];
        
        number /= 10;
    }
    
    return totalMatches;
}

int main() {
    int T=0;
    cin>>T;
    
    if(1<=T && T<=1000){
        long int A=0, B=0;
        
        while(T--){
            cin>>A>>B;
            
            if((1<=A && A<=1000000) && (1<=B && B<=1000000)){
                cout<<getTotalMatches(A+B)<<endl;
            }
        }
    }
    
	return 0;
}
