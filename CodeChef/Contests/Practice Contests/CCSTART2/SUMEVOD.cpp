//  https://www.codechef.com/CCSTART2/problems/SUMEVOD

#include <iostream>
using namespace std;

int main() {
	
	long int N=0;
	cin>>N;
	
	if(1<=N && N<=1000000){
	    long int oddSum=0, evenSum=0;
	    long int const size = N*2;
	    
	    
	    for(int i=1; i<=size; i++){
	        if(i%2){
    	        oddSum += i;
	        }else{
     	        evenSum += i;
     	    }
	    }
    	cout<<oddSum<<" "<<evenSum;
	}
	return 0;
}
