//  https://www.codechef.com/CCSTART2/problems/VALTRI

#include <iostream>
using namespace std;

int main() {
	
	int N;
	cin>>N;
	
	if(1<=N && N<=1000000){
	    if(N%5==0 || N%6==0){
	        cout<<"YES";
    	}else{
    	    cout<<"NO";
    	}
	}
	return 0;
}
