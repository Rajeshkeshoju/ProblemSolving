//  https://www.codechef.com/problems/AMR15A

#include <iostream>
using namespace std;

int isReadyForBattle(int* weapons,int size){
    
    int evenWeapons=0, oddWeapons=0;
    
    for(int i=0; i<size; i++){
        if(weapons[i] % 2){
            oddWeapons++;
        }else{
            evenWeapons++;
        }
    }
    
    return evenWeapons > oddWeapons;
}

int main() {
	
	int N;
	cin>>N;
	
	if(1<=N && N<=100){
	    
	    int weapons[N];
	    for(int i=0; i<N; i++){
	        cin>>weapons[i];
	    }
	    
	    if(isReadyForBattle(weapons,N)){
	        cout<<"READY FOR BATTLE";
	    }else{
	        cout<<"NOT READY";
	    }
	    
	}
	return 0;
}
