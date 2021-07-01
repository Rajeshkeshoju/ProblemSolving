//  https://www.codechef.com/problems/FLOW006

#include <iostream>
using namespace std;

int main() {
	
	int T=0, N=0;
	
	cin>>T;
	
	if(1 <= T <= 1000){
	   for(int i=0; i<T; i++){
        cin>>N;

        if(1<= N <= 1000000){
            int sum = 0;
            int digit = 0;

            while(N > 0){
                digit = N % 10;
                sum += digit;
                N /= 10;
            }
            cout<<sum<<endl;
        }
	  } 
	}
	
	return 0;
}
