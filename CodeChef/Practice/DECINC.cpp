//  https://www.codechef.com/problems/DECINC

#include <iostream>
using namespace std;

int main() {
	
	int N;
	cin>>N;
	
	if(0<=N && N<=1000){
	    
	    (N % 4) ?   N-- :   N++;
	    
	    cout<<N;
	    
	}
	return 0;
}
