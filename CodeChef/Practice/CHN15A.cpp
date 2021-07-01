//  https://www.codechef.com/problems/CHN15A

#include <iostream>
#include <vector>

using namespace std;

int getNumberOfWolverineLikeMinion(vector<int> minion, int K=0){
    int number = 0;
    
    for(int i=0; i<minion.size(); i++){
        if((minion[i] + K)%7 == 0){
            number++;
        }
    }
    
    return number;
}

int main() {
    int T = 0;
    cin>>T;
    
    if(1<=T && T<=100){
        int N=0, K=0;
        
        while(T--){
            cin>>N>>K;
            
            vector<int> minion;
            int minionValue = 0;
            
            while(N--){
                cin>>minionValue;
                minion.push_back(minionValue);
            }
            
            cout<<getNumberOfWolverineLikeMinion(minion,K)<<endl;
        }
    }
    
	return 0;
}
