//  https://www.codechef.com/problems/SNCKYEAR

#include <iostream>
using namespace std;

int isSnackDownHosted(int year){
    switch(year){
        case 2010:
        case 2015:
        case 2016:
        case 2017:
        case 2019:
            return 1;
        default:
            return 0;
    }
}

int main() {
	
	int T=0;
	cin>>T;
	
	if(1<T && T<=10){
	    int N=0;
	    
	    while(T--){
	        cin>>N;
	        
	        if(2010<=N && N<=2019){
	            isSnackDownHosted(N) ? cout<<"HOSTED" : cout<<"NOT HOSTED";
	            cout<<endl;
	        }
	    }
	}
	return 0;
}
