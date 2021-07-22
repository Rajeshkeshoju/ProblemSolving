//  https://www.codechef.com/problems/CHCHCL

#include <iostream>
using namespace std;

int isFirstPlayerWins(int N, int M){
    return (N * M) % 2 == 0;
}

int main() {
    
    int T = 0;
    cin>>T;
    
    if(1<=T && T<=100){
        
        int N = 0;
        int M = 0;
        
        while(T--){
            cin >> N >> M;
            
            isFirstPlayerWins(N, M) ? cout << "Yes" : cout << "No";
            cout <<endl;
        }
    }
    
	return 0;
}
