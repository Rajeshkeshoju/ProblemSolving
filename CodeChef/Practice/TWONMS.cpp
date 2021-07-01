//  https://www.codechef.com/problems/TWONMS

#include <iostream>
using namespace std;

int getMax(int A, int B){
    if(A > B){
        return A;
    }
    return B;
}

int getMin(int A, int B){
    if(A < B){
        return A;
    }
    return B;
}

int getResult(int aliceNumber, int bobNumber, int totalTurns){
    int scoreMultiplier = 2;
    
    if(totalTurns % 2){
        aliceNumber *= scoreMultiplier;
    }
    
    return getMax(aliceNumber, bobNumber)/getMin(aliceNumber, bobNumber);
}

int main() {
    
    int T = 0;
    cin>>T;
    
    if(1<=T && T<=100){
        
        while(T--){
            int totalTurns = 0;
            int aliceNumber = 0;
            int bobNumber = 0;
            
            cin>>aliceNumber;
            cin>>bobNumber;
            cin>>totalTurns;
            
            int aliceConstraint = 1<=aliceNumber && aliceNumber<=1000000000;
            int bobConstraint = 1<=bobNumber && bobNumber<=1000000000;
            int totalTurnsConstraint = 1<=totalTurns && totalTurns<=1000000000;
            
            if(aliceConstraint && bobConstraint && totalTurnsConstraint){
                cout<<getResult(aliceNumber, bobNumber, totalTurns);
                cout<<endl;
            }
        }
    }
    
	return 0;
}
