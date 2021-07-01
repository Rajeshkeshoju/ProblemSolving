//  https://www.codechef.com/problems/DIFFSUM

#include <iostream>
using namespace std;

int main() {
	
	int N1=0,N2=0;
	cin>>N1>>N2;
	
	if((-1000<=N1 && N1<=1000) && (-1000<=N2 && N2<=1000)){
	    
	    if(N1 > N2){
	        cout<<N1-N2;
	    }else{
	        cout<<N1+N2;
	    }
	    
	}
	
	return 0;
}
