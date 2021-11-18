//  https://www.codechef.com/START17C/problems/CHEFVACATION

#include <iostream>
using namespace std;

bool willChefAttendBothTrips(int familyTripDays, int friendsTripDays, int vaccinationDaysLeft){
    return (familyTripDays + friendsTripDays) <= vaccinationDaysLeft;
}

int main() {
	
	int T = 0;
	cin >> T;
	
	if(1<=T && T<=1000){
	    
	    int familyTripDays = 0;
	    int friendsTripDays = 0;
	    int vaccinationDaysLeft = 0;
	    
	    while(T--){
	        cin >> familyTripDays;
	        cin >> friendsTripDays;
	        cin >> vaccinationDaysLeft;
	        
	        if(willChefAttendBothTrips(familyTripDays, friendsTripDays, vaccinationDaysLeft)){
	            cout << "YES";
	        }else{
	            cout << "NO";
	        }
	        cout << "\n";
	    }
	}
	
	return 0;
}
