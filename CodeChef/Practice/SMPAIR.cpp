//  https://www.codechef.com/problems/SMPAIR

#include <bits/stdc++.h>
using namespace std;

int getSmallestSum(long int* number, long int size){
    sort(number, number+size);
    return number[0] + number[1];
}

int main() {
	
	long int T=0;
	cin>>T;
	
	if(1<=T && T<=100000){
	    
	    while(T--){
	        long int N=0;
    	    cin>>N;
    	    
    	    if(2<=N && N<=100000){
    	        long int number[N];
    	        
    	        for(int i=0; i<N; i++){
    	            long int num=0;
    	            cin>>num;
    	            
    	            if(1<=num && num<=1000000){
    	                number[i] = num;
    	            }else{
    	                i--;
    	            }
    	        }
    	        
    	        cout<<getSmallestSum(number,N)<<endl;
    	    }
	    }
	    
	}
	return 0;
}
