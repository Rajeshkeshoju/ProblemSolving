//  https://www.codechef.com/JULY21C/problems/EITA

#include <iostream>
#define MAX(a,b) ((a > b)? a : b)
using namespace std;

int getWorkDoneForGivenDays(int workUnits, int daysOfWork){
    return workUnits * daysOfWork;
}

int main() {
	
    int T = 0;
    cin >> T;
    
    if(1<=T && T<=5000){
        int d, x, y, z;
        
        while(T--){
            cin >> d;
            cin >> x;
            cin >> y >> z;
            
            if(1<=d && d<=7
            && 1<=x && x<=18
            && 1<=y && y<=18
            && 1<=z && z<=18
            && y > x
            && z < x){
                
                const int DAYS_PER_WEEK = 7;
                
                int workDoneForStrategyOne = getWorkDoneForGivenDays(x, DAYS_PER_WEEK);
                int workDoneForStrategyTwo =    getWorkDoneForGivenDays(y, d) 
                                            +   getWorkDoneForGivenDays(z, DAYS_PER_WEEK - d);
                                         
                cout << MAX(workDoneForStrategyOne, workDoneForStrategyTwo);
                cout << endl;
            }
        }
    }
	return 0;
}
