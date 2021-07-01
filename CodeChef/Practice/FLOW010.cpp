//  https://www.codechef.com/problems/FLOW010

#include <iostream>
using namespace std;

int main() {
	
	int T;
	cin>>T;
	
	if(1<=T && T<=1000){
	    
	    while(T--){
            char letter;
            cin>>letter;
            
            switch(letter){
                
                case 'B':
                case 'b':    
                    cout<<"BattleShip"; 
                    break;
                    
                case 'C':
                case 'c':
                    cout<<"Cruiser";
                    break;
                    
                case 'D':
                case 'd':
                    cout<<"Destroyer";
                    break;
                    
                case 'F':
                case 'f':
                    cout<<"Frigate";
                    break;
                    
                default:{}
            }
            cout<<endl;
	    }
	}
	
	return 0;
}
