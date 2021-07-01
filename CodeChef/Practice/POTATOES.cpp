//  https://www.codechef.com/problems/POTATOES

#include <iostream>
#include <cmath>

using namespace std;

int isPrime(int numberOfHarvests){
    int flag = 0;
    
    for(int i=2; i<=sqrt(numberOfHarvests); i++){
        if(numberOfHarvests % i == 0){
            return 0;
        }
    }
    return 1;
}

int main() {
	
	int T = 0;
	cin>>T;
	
	if(1<=T && T<=1000){
	    int x=0, y=0;
	    
	    while(T--){
	        cin>>x>>y;
	        
	        if((1<=x && x<=1000) && (1<=y && y<=1000)){
	            
	            int sum = x+y+1;
	            int flag = 0;
	            
	            while(!isPrime(sum)){
	                sum += 1;
	            }
	            
	            cout<<sum-(x+y)<<endl;
	        }
	    }
	    
	}
	
	return 0;
}
