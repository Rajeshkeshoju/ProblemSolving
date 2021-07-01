//  https://www.codechef.com/MAY21C/problems/XOREQUAL

#include <bits/stdc++.h>

#define MOD_VALUE 1000000007

using namespace std;

int getCount(long long x, unsigned int N, long long mod){
    
    int count = 1;
  
    x = x % mod;
    if(x == 0){
        return 0;
    }
    
    while(N > 0){
        if(N & 1){
            count = (count * x) % mod;
        }
        
        N = N>>1;
        x = (x * x) % mod;
    }
    
    return count;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	
	int T;
	cin>>T;
	
	if(1<=T && T<=100000){
	    long long N = 0;
	    
	    while(T--){
	        cin>>N;
	        
	        cout<<getCount(2,N-1,MOD_VALUE)<<endl;
	    }
	}
	return 0;
}
