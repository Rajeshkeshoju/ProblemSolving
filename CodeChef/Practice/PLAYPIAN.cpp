//  https://www.codechef.com/problems/PLAYPIAN

#include <iostream>
using namespace std;

bool isValidLogOfPiano(string logPiano){
    bool isValidLog = false;
    
    for(int i=0; i<logPiano.size()-1; i += 2){
        if(logPiano[i] != logPiano[i+1]){
            isValidLog = true;
        }else{
            return false;
        }
    }
    
    return isValidLog;
}

int main() {
    
    int T = 0;
    cin >> T;
    
    if(1<=T && T<=500){
        string logPiano = "";
        
        while(T--){
            cin >> logPiano;
            
            int constraint1 = 2<=logPiano.size() && logPiano.size()<=100;
            int constraint2 = (logPiano.size() % 2) == 0;
            
            if(constraint1 && constraint2){
                
                if(isValidLogOfPiano(logPiano)){
                    cout << "yes";
                }else{
                    cout << "no";
                }
                cout << endl;
            }
        }
    }
    
	return 0;
}
