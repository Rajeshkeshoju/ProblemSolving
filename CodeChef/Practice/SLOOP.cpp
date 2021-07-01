//  https://www.codechef.com/problems/SLOOP

#include <iostream>
using namespace std;

int main() {
	
	int T=0;
	cin>>T;
	
	if(1<=T && T<=1000){
	    int minutesToReach = 0;
	    int songDurationInMinutes = 0;
	    
	    while(T--){
	        cin>>minutesToReach;
	        cin>>songDurationInMinutes;
	        
	        if(
	           (1<=minutesToReach && minutesToReach<=100)
	           && (1<=songDurationInMinutes && songDurationInMinutes<=10)
	        ){
	            cout<<(minutesToReach/songDurationInMinutes);
	            cout<<endl;
	        }
	    }
	}
	return 0;
}
