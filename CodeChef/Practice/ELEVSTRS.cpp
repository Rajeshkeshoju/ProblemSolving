//  https://www.codechef.com/problems/ELEVSTRS

#include <iostream>
#include <cmath>
using namespace std;

int main() {
    
    int T = 0;
    cin>>T;
    
    if(1<=T && T<=1000){
        int numberOfFloors = 0;
        int velocityForStairs = 0;
        int velocityForElevator = 0;
        
        while(T--){
            cin >> numberOfFloors;
            cin >> velocityForStairs;
            cin >> velocityForElevator;
            
            if(1<=numberOfFloors && numberOfFloors<=100
            && 1<=velocityForStairs && velocityForStairs<=100
            && 1<=velocityForElevator && velocityForElevator<=100){
                
                int timeThroughStairs = 2 * velocityForStairs * velocityForStairs;
                int timeThroughElevator = velocityForElevator * velocityForElevator;
                
                if(timeThroughElevator > timeThroughStairs){
                    cout << "Elevator";
                }else{
                    cout << "Stairs";
                }
                cout << endl;
            }
        }
    }
    
	return 0;
}
