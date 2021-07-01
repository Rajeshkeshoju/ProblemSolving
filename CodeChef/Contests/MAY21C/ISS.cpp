//  https://www.codechef.com/MAY21C/problems/ISS

#include <bits/stdc++.h>
using namespace std;

long long getTerm(long long k=0, long long i=0){
    return k + (i * i);
}

long long gcd(long long k=0,long long i=0, long long j=0){
    long long a = getTerm(k, i);
    long long b = getTerm(k, j);
    
    while(a != b){
        if(a > b){
            a -= b;
        }else{
            b -= a;
        }
    }
    
    return a;
}

long long getSum(long long k = 0){
    long long sum = 0;
    
    for(long long i=1; i<=2*k; i++){
        sum += gcd(k,i,i+1);
    }
    
    return sum;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	
	long long T = 0;
	cin>>T;
	
	if(1<=T && T<=1000000){
	    long long k = 0;
	    
	    while(T--){
	        cin>>k;
	        
	        if(1<=k && k<=1000000){
	            cout<<getSum(k)<<endl;
	        }
	    }
	}
	return 0;
}
