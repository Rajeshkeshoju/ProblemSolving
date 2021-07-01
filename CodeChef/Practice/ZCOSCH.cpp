//  https://www.codechef.com/problems/ZCOSCH

#include <iostream>
using namespace std;

int getScholorship(int  rank = 0){
    int fullScholorship = 100;
    int halfScholorship = 50;
    int zeroScholorship = 0;
    
    if(rank <= 50){
        return fullScholorship;
    }
    
    if(51<=rank && rank<=100){
        return halfScholorship;
    }
    
    return zeroScholorship;
}

int main() {
    
    int rank = 0;
    cin>>rank;
    
    if(1<=rank && rank<=1000000000){
        cout<<getScholorship(rank);
    }
    
	return 0;
}
