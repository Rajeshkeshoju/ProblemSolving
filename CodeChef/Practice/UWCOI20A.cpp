//  https://www.codechef.com/problems/UWCOI20A

#include <iostream>
#define MAX(a, b)  (a > b) ? a : b
using namespace std;

int main() {
	int T = 0;
	cin >> T;
	
	if(1<=T && T<=10){
	    int numberOfMountains = 0;
	    
	    while(T--){
	        cin >> numberOfMountains;
	        int mountainsHeight[numberOfMountains];
	        
	        if(1<=numberOfMountains && numberOfMountains<=100000){
	            int peakHeight = 0;
	            
	            for(int i=0; i<numberOfMountains; i++){
	                cin >> mountainsHeight[i];
	                peakHeight = MAX(peakHeight, mountainsHeight[i]);
	            }
	            
	            cout << peakHeight << endl;
	        }
	    }
	}
	
	return 0;
}
