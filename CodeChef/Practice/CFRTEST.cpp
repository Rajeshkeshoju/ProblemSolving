//  https://www.codechef.com/problems/CFRTEST

#include <iostream>
#include <set>
using namespace std;

int main() {
    
    int T = 0;
    cin>>T;
    
    if(1<=T && T<=10000){
        
        int numberOfWeirdFriends = 0;
        
        while(T--){
            cin>>numberOfWeirdFriends;
            
            if(1<=numberOfWeirdFriends && numberOfWeirdFriends<=50){
                set<int> partyDays;
                int partyDate = 0;
                
                while(numberOfWeirdFriends--){
                    cin>>partyDate;
                    
                    if(1<=partyDate && partyDate<=100){
                        partyDays.insert(partyDate);
                    }
                }
                
                cout<<partyDays.size();
                cout<<endl;
            }
        }
    }
    
	return 0;
}
