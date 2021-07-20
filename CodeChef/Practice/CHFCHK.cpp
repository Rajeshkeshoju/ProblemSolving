//  https://www.codechef.com/problems/CHFCHK

#include <bits/stdc++.h>
using namespace std;

int main() {
    
    int T = 0;
    cin>>T;
    
    if(1<=T && T<=100){
        int N = 0;
        
        while(T--){
            cin >> N;
            int jumps[N];
            
            for(int i=0; i<N; i++){
                cin >> jumps[i];
            }
            
            sort(jumps, jumps + N);
            cout << jumps[0] << endl;
        }
    }
    
	return 0;
}
