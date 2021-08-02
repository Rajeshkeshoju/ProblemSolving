//  https://www.codechef.com/JULY21C/problems/RELATIVE

#include <iostream>
using namespace std;

int getMinimumHeightRequiredToAchieveSpeedOfLight(int gravity, int velocity){  
    if((2 * gravity) > 0){
        return (velocity * velocity) / (2 * gravity);
    }
    
    return 0;
}

int main() {
	int T = 0;
	cin >> T;
	
	if(1<=T && T<=5000){
	    int gravity = 0;
	    int velocity = 0;
	    
	    while(T--){
	        cin >> gravity;
	        cin >> velocity;
	        
	        if(1<=gravity && gravity<=10
	        && 1000<=velocity && velocity<=3000){
	            
	            cout << getMinimumHeightRequiredToAchieveSpeedOfLight(gravity, velocity);
	            cout << endl;
	        }
	    }
	}
	return 0;
}
