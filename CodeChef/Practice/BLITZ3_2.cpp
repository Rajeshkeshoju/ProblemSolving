//  https://www.codechef.com/problems/BLITZ3_2

#include <iostream>
using namespace std;

int getDurationOfGame(int numberOfTurns, int A, int B){
    
    int totalTime = 2 * (180 + numberOfTurns);
    return totalTime - (A + B);
}

int main() {
	
	int T = 0;
	cin>>T;
	
	if(1<=T && T<=100000){
	    int numberOfTurns, A, B;
	    
	    while(T--){
	        cin >> numberOfTurns;
	        cin >> A >> B;
	        
	        int constraintTurns = 10<=numberOfTurns && numberOfTurns<=100;
	        int constraintAB = (numberOfTurns % 2) ? (A >= 2) : (B >= 2);
	        
	        if(constraintTurns && constraintAB){
	            cout<<getDurationOfGame(numberOfTurns, A, B);
	            cout<<endl;
	        }
	    }
	}
	
	return 0;
}
