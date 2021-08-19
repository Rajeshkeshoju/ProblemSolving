//  https://www.codechef.com/AUG21C/problems/OLYRANK

#include <iostream>
using namespace std;

struct MedalsOfNation{
    int goldMedals;
    int silverMedals;
    int bronzeMedals;
};

int getRank(MedalsOfNation medalsOfNation){
    return medalsOfNation.goldMedals
        +  medalsOfNation.silverMedals
        +  medalsOfNation.bronzeMedals;
}

int getBetterRankedCountryOnLeaderboard(MedalsOfNation medalsOfNationOne,
                                        MedalsOfNation medalsOfNationTwo){
                            
    int betterRankedCountry = 1;
    
    if(getRank(medalsOfNationOne) < getRank(medalsOfNationTwo)){
        betterRankedCountry = 2;
    }
    
    return betterRankedCountry;
}

int main() {
	int T = 0;
	cin >> T;
	
	if(1<=T && T<=1000){
	    MedalsOfNation medalsOfNationOne;
	    MedalsOfNation medalsOfNationTwo;
	    
	    while(T--){
	        cin >> medalsOfNationOne.goldMedals;
	        cin >> medalsOfNationOne.silverMedals;
	        cin >> medalsOfNationOne.bronzeMedals;
	        
	        cin >> medalsOfNationTwo.goldMedals;
	        cin >> medalsOfNationTwo.silverMedals;
	        cin >> medalsOfNationTwo.bronzeMedals;
	        
	        cout << getBetterRankedCountryOnLeaderboard(medalsOfNationOne, medalsOfNationTwo);
	        cout << endl;
	    }
	}
	
	return 0;
}
