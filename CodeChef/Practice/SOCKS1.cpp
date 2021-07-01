//  https://www.codechef.com/problems/SOCKS1

#include <iostream>
using namespace std;

int hasPairOfSocks(int A, int B, int C){
    return (A == B) || (A == C) || (B == C);
}

int main() {
	int A, B, C;
	cin>>A>>B>>C;
	       
	if(hasPairOfSocks(A, B, C)){
        cout<<"YES";   
	}else{
	    cout<<"NO";
	}cout<<endl;
	
	return 0;
}
