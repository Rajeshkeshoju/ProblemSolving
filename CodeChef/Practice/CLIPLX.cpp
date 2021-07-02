//  https://www.codechef.com/problems/CLIPLX

#include <iostream>
using namespace std;

int main() {
    
    int T = 0;
    cin >> T;
    
    if(1<=T && T<=10000){
        int neededScore = 0;
        int matchesLeft = 0;
        const int SCORE_FOR_WIN = 2;
        
        while(T--){
            cin >> neededScore;
            cin >> matchesLeft;
            
            if( 1<=neededScore && neededScore<=100
            &&  1<=matchesLeft && matchesLeft<=100){
                
                if(neededScore > matchesLeft){
                    cout << (neededScore - matchesLeft);
                }else{
                    cout << 0;
                }
                cout << endl;
            }
        }
    }
    
	return 0;
}
