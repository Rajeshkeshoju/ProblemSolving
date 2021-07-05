//  https://www.codechef.com/problems/JDELAY

#include <iostream>
using namespace std;

int main() {
    int T = 0;
    cin >> T;
    
    if(1<=T && T<=100){
        int totalSubmissions = 0;
        
        while(T--){
            cin >> totalSubmissions;
            
            if(1<=totalSubmissions && totalSubmissions<=100){
                int submissionTimeInMinutes = 0;
                int judgingTimeInMinutes = 0;
                
                int delayedSubmissions = 0;
                const int DELAY_TIME_IN_MINUTES = 5;
                
                while(totalSubmissions--){
                    cin >> submissionTimeInMinutes;
                    cin >> judgingTimeInMinutes;
                    
                    if((judgingTimeInMinutes - submissionTimeInMinutes) > DELAY_TIME_IN_MINUTES){
                        delayedSubmissions++;
                    }
                }
                
                cout << delayedSubmissions;
                cout << endl;
            }
        }
    }
    
	return 0;
}
