//  https://www.codechef.com/START17C/problems/NEWPIECE

#include <iostream>
using namespace std;

int getMinMoves(int a, int b, int p, int q){
    if(a == p && b == q){
        return 0;
    }
    
    if((a+b)%2 == (p+q)%2){
        return 2;
    }
    
    return 1;
}

int main() {
	int T = 0;
	cin >> T;
	
	if(1<=T && T<=5000){
	    
	    while(T--){
	        int a = 0, b = 0;
    	    int p = 0, q = 0;
    	    
    	    cin >> a >> b;
    	    cin >> p >> q;
    	    
    	    cout << getMinMoves(a, b, p, q);
    	    cout << "\n";
	    }
	}
	
	
	return 0;
}
