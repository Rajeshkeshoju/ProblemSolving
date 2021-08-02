//  https://www.codechef.com/problems/SHOEFIT

#include <iostream>
using namespace std;

int canChefGoOutWithShoePair(int A, int B, int C){
    const int CAN_GO_OUT = 1;
    const int CANNOT_GO_OUT = 0;
    
    int sum = A + B + C;
    
    if(sum == 0 || sum == 3){
        return CANNOT_GO_OUT;
    }
    
    return CAN_GO_OUT;
}

int main() {
	int T = 0;
	cin >> T;
	
	if(1<=T && T<=8){
	    int A, B, C;
	    
	    while(T--){
	        cin >> A >> B >> C;
	        
	        cout << canChefGoOutWithShoePair(A, B, C);
	        cout << endl;
	    }
	}
	return 0;
}
