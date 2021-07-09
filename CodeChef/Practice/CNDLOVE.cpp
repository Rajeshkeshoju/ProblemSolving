//   https://www.codechef.com/problems/CNDLOVE

#include <iostream>
using namespace std;

int main() {
    int T = 0;
    cin>>T;
    
    if(1<=T && T<=1000){
        int numberOfCandyPacks = 0;
        
        while(T--){
            cin >> numberOfCandyPacks;
            int numberOfCandiesInPack = 0;
            int totalCandies = 0;
            
            while(numberOfCandyPacks--){
                cin >> numberOfCandiesInPack;
                totalCandies += numberOfCandiesInPack;
            }
            
            if(totalCandies % 2){
                cout << "YES";
            }else{
                cout << "NO";
            }
            cout << endl;
        }
    }
    
	return 0;
}
