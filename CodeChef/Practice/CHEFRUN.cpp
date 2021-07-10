//  https://www.codechef.com/problems/CHEFRUN

#include <iostream>
#include <cmath>
using namespace std;

float getTimeToReachDestination(int distance, int velocity){
    return abs(distance) / (float)velocity;
}

int main() {
    
    int T = 0;
    cin>>T;
    
    if(1<=T && T<=100000){
        int positionOfChefsRestaurent = 0;
        int positionOfKefasRestaurent = 0;
        int positionOfSecretReciepeBottle = 0;
        
        int velocityOfChef = 0;
        int velocityOfKefa = 0;
        
        while(T--){
            cin >> positionOfChefsRestaurent;
            cin >> positionOfKefasRestaurent;
            cin >> positionOfSecretReciepeBottle;
            
            cin >> velocityOfChef;
            cin >> velocityOfKefa;
            
            float chefsTime = getTimeToReachDestination(
                positionOfSecretReciepeBottle - positionOfChefsRestaurent, velocityOfChef);
                
            float kefasTime = getTimeToReachDestination(
                positionOfKefasRestaurent - positionOfSecretReciepeBottle, velocityOfKefa);
                
            if(chefsTime < kefasTime){
                cout << "Chef";
            }else if(chefsTime > kefasTime){
                cout << "Kefa";
            }else{
                cout << "Draw";
            }
            cout << endl;
        }
    }
    
	return 0;
}
