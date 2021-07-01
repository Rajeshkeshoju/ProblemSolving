//  https://www.codechef.com/CCSTART2/problems/ISBOTH

#include <iostream>
using namespace std;

int main() {
	
	int N;
	cin>>N;
	
	if(1<=N && N<=1000){
	    if(N%5==0 && N%11==0){
	        cout<<"BOTH";
    	}else if(N%5==0 || N%11==0){
    	    cout<<"ONE";
    	}else{
    	    cout<<"NONE";
    	}
	}
	return 0;
}
