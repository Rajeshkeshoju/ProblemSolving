//  https://www.codechef.com/JUNE21C/problems/COCONUT

#include <iostream>
using namespace std;

int main() {
	int T = 0;
	cin>>T;
	
	if(1<=T && T<=15000){
	    int availableCoconutWater = 0;
	    int availableCoconutPulp = 0;
	    
	    int requiredCoconutWater = 0;
	    int requiredCoconutPulp = 0;
	    
	    while(T--){
    	    cin>>availableCoconutWater;
    	    cin>>availableCoconutPulp;
    	    cin>>requiredCoconutWater;
    	    cin>>requiredCoconutPulp;
    	    
	        int constraints[] = {
    	        (100<=availableCoconutWater && availableCoconutWater<=200),
    	        (400<=availableCoconutPulp && availableCoconutPulp<=500),
    	        (1000<=requiredCoconutWater && requiredCoconutWater<=1200),
    	        (1000<=requiredCoconutPulp && requiredCoconutPulp<=1500),
    	        
    	        ((requiredCoconutWater % availableCoconutWater) == 0),
    	        ((requiredCoconutPulp % availableCoconutPulp) == 0)
    	    };
    	    
    	    if(    constraints[0] 
    	        && constraints[1]
    	        && constraints[2]
    	        && constraints[3]
    	        && constraints[4]
    	        && constraints[5]
    	    ){
        	    cout<<(
        	            (requiredCoconutWater/availableCoconutWater) 
        	        +   (requiredCoconutPulp/availableCoconutPulp)
        	    );
        	    cout<<endl;
    	    }
	    }
	}
	
	return 0;
}
