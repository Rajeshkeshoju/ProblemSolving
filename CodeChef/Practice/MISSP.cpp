//  https://www.codechef.com/problems/MISSP

#include <iostream>
using namespace std;

int getUnpairedDoll(int dolls[], int numberOfDolls){
    int unpaired = dolls[0];
    
    for(int i=1; i<numberOfDolls; i++){
        unpaired ^= dolls[i];
    }
    
    return unpaired;
}

int main() {
    
    int T = 0;
    cin>>T;
    
    if(1<=T && T<=10){
        int numberOfDolls = 0;
        
        while(T--){
            cin>>numberOfDolls;
            
            if((numberOfDolls % 2) && (1<=numberOfDolls && numberOfDolls<=100000)){
                int dolls[numberOfDolls];
                
                for(int i=0; i<numberOfDolls; i++){
                    cin>>dolls[i];
                }
                
                cout<<getUnpairedDoll(dolls, numberOfDolls);
                cout<<endl;
            }
        }
    }
    
	return 0;
}
