//  https://www.codechef.com/problems/LOSTWKND

#include <iostream>
using namespace std;

bool doesChefHasWorkOnWeekend(  int* workHoursPerWeek, 
                                int WORKING_DAYS_PER_WEEK, 
                                int officeEquivalentWorkHoursAtHome){
    const int HOURS_PER_DAY = 24;
    int totalWorkHours = 0;
    for(int i=0; i<WORKING_DAYS_PER_WEEK; i++){
        totalWorkHours += workHoursPerWeek[i];
    }
    
    return (officeEquivalentWorkHoursAtHome * totalWorkHours) > (WORKING_DAYS_PER_WEEK * HOURS_PER_DAY);
}

int main() {
	int T = 0;
	cin >> T;
	
	if(1<=T && T<=1000){
	    const int WORKING_DAYS_PER_WEEK = 5;
	    
	    while (T--) {
	        int workHoursPerWeek[WORKING_DAYS_PER_WEEK];
	        
	        int workHours = 0;
	        for(int i=0; i<WORKING_DAYS_PER_WEEK; i++){
	            cin >> workHours;
	            
	            if(0<=workHours && workHours<=24){
	                workHoursPerWeek[i] = workHours;
	            }
	        }
	        
	        int officeEquivalentWorkHoursAtHome = 0;
	        cin >> officeEquivalentWorkHoursAtHome;
	        
	        if(1<=officeEquivalentWorkHoursAtHome
	        && officeEquivalentWorkHoursAtHome <=24){
	            
	            if(doesChefHasWorkOnWeekend(    workHoursPerWeek, 
    	                                        WORKING_DAYS_PER_WEEK, 
    	                                        officeEquivalentWorkHoursAtHome)
    	        ){
    	            cout << "Yes";
    	        }else{
    	            cout << "No";
    	        }
    	        cout << endl;
	        }
	    }
	}
	return 0;
}
