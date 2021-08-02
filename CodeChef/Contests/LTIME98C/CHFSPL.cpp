//  https://www.codechef.com/LTIME98C/problems/CHFSPL

#include <iostream>
#include <algorithm>
using namespace std;

int getMaxNumberOfHitPointsUsingSpells(int* spells, int NUMBER_OF_SPELLS){
    sort(spells, spells + NUMBER_OF_SPELLS);
    return spells[NUMBER_OF_SPELLS - 1] + spells[NUMBER_OF_SPELLS - 2];
}

int main() {
	int T = 0;
	cin >> T;
	
	if(1<=T && T<=10000){
	    const int NUMBER_OF_SPELLS = 3;
	    int spells[NUMBER_OF_SPELLS];
	    
	    while(T--){
	        for(int i=0; i<NUMBER_OF_SPELLS; i++){
	            cin >> spells[i];
	        }
	        
	        cout << getMaxNumberOfHitPointsUsingSpells(spells, NUMBER_OF_SPELLS);
	        cout << endl;
	    }
	}
	
	return 0;
}
