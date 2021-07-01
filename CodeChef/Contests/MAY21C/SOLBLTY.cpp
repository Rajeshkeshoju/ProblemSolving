//	https://www.codechef.com/MAY21C/problems/SOLBLTY

#include <iostream>
using namespace std;

int getMaxAmountOfSugarToDissolve(int X=0, int A=0, int B=0){
    return (A + ((100-X) * B)) * 10;
}

int main() {
	
	int T = 0;
	cin>>T;
	
	if(1<=T && T<=1000){
	    int X=0, A=0, B=0;
	    
	    while(T--){
	        cin>>X>>A>>B;
	        
	        if((31<=X && X<=40) && (101<=A && A<=120) && (1<=B && B<=5)){
	            cout<<getMaxAmountOfSugarToDissolve(X, A, B)<<endl;
	        }
	    }
	}
	
	return 0;
}
