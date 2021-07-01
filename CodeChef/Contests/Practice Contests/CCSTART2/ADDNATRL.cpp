//  https://www.codechef.com/CCSTART2/problems/ADDNATRL

#include <iostream>
using namespace std;

int main() {
	
	long int N;
	cin>>N;
	
	if(1<=N && N<=1000000000){
	    long int sum=0;
	
    	while(N){
    	    sum += N--;
    	}
    	cout<<sum;
	}
	
	
	return 0;
}
