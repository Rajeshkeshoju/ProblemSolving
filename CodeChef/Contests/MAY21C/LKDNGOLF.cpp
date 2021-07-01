//  https://www.codechef.com/MAY21C/problems/LKDNGOLF

#include <bits/stdc++.h>
using namespace std;

int isBallEntersHole(int N=0, int x=0, int k=0){
    
    if(x % k == 0){
        return 1;
    }
    
    if(((N+1) - x) % k == 0){
        return 1;
    }
    
    return 0;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	
	int T = 0;
	cin>>T;
	
	if(1<=T && T<=100000){
	    int N=0, x=0, k=0;
	    
	    while(T--){
	        cin>>N>>x>>k;
	        
	        if(isBallEntersHole(N, x, k)){
	            cout<<"YES";
	        }else{
	            cout<<"NO";
	        }
	        cout<<endl;
	    }
	}
	return 0;
}
