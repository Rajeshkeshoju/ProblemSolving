//  https://www.codechef.com/problems/CO92JUDG

#include <bits/stdc++.h>
using namespace std;

string getWinner(int aliceRace[], int bobRace[], int numberOfRaces){
    int aliceTurns = numberOfRaces;
    int bobTurns = numberOfRaces;
    
    sort(aliceRace, aliceRace + aliceTurns, greater<int>());
    sort(bobRace, bobRace + bobTurns, greater<int>());
    
    aliceRace[0] = 0;
    bobRace[0] = 0;
    
    int aliceScore = 0;
    int bobScore = 0;
    
    for(int i=0; i<aliceTurns; i++){
        aliceScore += aliceRace[i];
    }
    
    for(int i=0; i<bobTurns; i++){
        bobScore += bobRace[i];
    }
    
    if(aliceScore < bobScore){
        return "Alice";
    }else if(aliceScore > bobScore){
        return "Bob";
    }
    
    return "Draw";
}

int main() {
    
    int T = 0;
    cin>>T;
    
    if(1<=T && T<=100){
        int numberOfRaces = 0;
        
        while(T--){
            cin >> numberOfRaces;
            
            int aliceRace[numberOfRaces];
            int bobRace[numberOfRaces];
            
            for(int i=0; i<numberOfRaces; i++){
                cin >> aliceRace[i];
            }
            
            for(int i=0; i<numberOfRaces; i++){
                cin >> bobRace[i];
            }
            
            cout << getWinner(aliceRace, bobRace, numberOfRaces);
            cout << endl;
        }
    }
    
	return 0;
}
