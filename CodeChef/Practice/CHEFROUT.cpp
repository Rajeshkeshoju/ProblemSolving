//  https://www.codechef.com/problems/CHEFROUT

#include <iostream>
using namespace std;

bool isPossibleRecordOfActivities(string instances = ""){
    int numberOfActivities = instances.size();
    bool isValidOrderOfActivities = false;
    
    for(int i=0; i<numberOfActivities - 1; i++){
        if(instances[i] <= instances[i+1]){
            isValidOrderOfActivities = true;
        }else{
            isValidOrderOfActivities = false;
            break;
        }
    }
    
    return isValidOrderOfActivities;
}

int main() {
    int T = 0;
    cin>>T;
    
    if(1<=T && T<=20){
        string instances = "";
        
        while(T--){
            cin >> instances;
            
            if(isPossibleRecordOfActivities(instances)){
                cout << "yes";
            }else{
                cout << "no";
            }
            cout << endl;
        }
    }
    
	return 0;
}
