//  https://www.codechef.com/LTIME98C/problems/REDALERT

#include <iostream>
using namespace std;

struct RainingCautions{
    int rainyDays = 0;
	int criterialWaterLevel = 0;
	int redAlertWaterLevel = 0;
}rainingCautions;

bool willThereBeARedAlert(int* rains, RainingCautions rainingCautions){
    int waterLevel = 0;
    
    for(int i=0; i<rainingCautions.rainyDays; i++){
        if(rains[i] > 0){
            waterLevel += rains[i];
        }else{
            if(waterLevel < rainingCautions.criterialWaterLevel){
                waterLevel = 0;
            }else{
                waterLevel -= rainingCautions.criterialWaterLevel;
            }
        }
        
        if(waterLevel > rainingCautions.redAlertWaterLevel){
            return true;
        }
    }
    
    return false;
}

int main() {
	int T = 0;
	cin >> T;
	
	while(T--){
        cin >> rainingCautions.rainyDays;
        cin >> rainingCautions.criterialWaterLevel;
        cin >> rainingCautions.redAlertWaterLevel;
        
        int rains[rainingCautions.rainyDays];
        
        for(int i=0; i<rainingCautions.rainyDays; i++){
            cin >> rains[i];
        }
        
        if(willThereBeARedAlert(rains, rainingCautions)){
            cout << "YES";
        }else{
            cout << "NO";
        }
        cout << endl;
	}
	
	return 0;
}
