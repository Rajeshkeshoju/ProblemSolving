//  https://www.codechef.com/problems/CCISLAND

#include <iostream>
#define MIN(x, y) (x < y) ? x : y
using namespace std;

bool canChefBuildBoatWithAvailableSupplies(
    int availableUnitsOfFood,   int availableUnitsOfWater,
    int requiredUnitsOfFood,    int requiredUnitsOfWater,
    int daysToBuildBoat
){
    float possibleDaysToHaveSupplies = MIN(
                                            availableUnitsOfFood / (float) requiredUnitsOfFood,
                                            availableUnitsOfWater / (float) requiredUnitsOfWater
                                        );
                                        
    return possibleDaysToHaveSupplies >= daysToBuildBoat;
}

int main() {
	int T = 0;
	cin >> T;
	
	if(1<=T && T<=300){
	    int availableUnitsOfFood = 0;
    	int availableUnitsOfWater = 0;
    	int requiredUnitsOfFood = 0;
    	int requiredUnitsOfWater = 0;
    	int daysToBuildBoat = 0;
    	
    	while (T--) {
    	    cin >> availableUnitsOfFood;
        	cin >> availableUnitsOfWater;
        	cin >> requiredUnitsOfFood;
        	cin >> requiredUnitsOfWater;
        	cin >> daysToBuildBoat;
        	
        	canChefBuildBoatWithAvailableSupplies(
        	    availableUnitsOfFood,   availableUnitsOfWater,
        	    requiredUnitsOfFood,    requiredUnitsOfWater,
        	    daysToBuildBoat
        	) ? cout << "YES" : cout << "NO";
        	cout << endl;
    	}
	}
	
	return 0;
}
