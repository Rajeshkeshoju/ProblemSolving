//  https://www.codechef.com/YTPP001/problems/CLODIV

#include <iostream>
#define isValidConstraint(x) 1<=x && x<=1000000000
using namespace std;

int getMaximumDivisibleNumber(int A, int B){
    int divisibleNumber = 0;
    
    for(int i=B; i<=A; i+=B){
        if(i % B == 0){
            divisibleNumber = i;
        }
    }
    
    return divisibleNumber;
}

int main() {
	int A = 0;
	int B = 0;
	
	cin >> A >> B;
	
	if(isValidConstraint(A) && isValidConstraint(B)){
	    cout << getMaximumDivisibleNumber(A, B);
	}
	
	return 0;
}
