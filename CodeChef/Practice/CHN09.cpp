//  https://www.codechef.com/problems/CHN09

#include <iostream>
using namespace std;

int getMinimumBalloonsToReplace(string s){
    int aBalloons = 0;
    int bBalloons = 0;
    
    for(char i: s){
        if(i == 'a'){
            aBalloons += 1;
        }else{
            bBalloons += 1;
        }
    }
    
    if(bBalloons < aBalloons){
        return bBalloons;
    }else if(bBalloons > aBalloons){
        return aBalloons;
    }else{
        return aBalloons;
    }
}

int main() {
	
	int T=0;
	cin>>T;
	
	if(1<T && T<=100){
	    string s;
	    
	    while(T--){
	        cin>>s;
	    
    	    if(1<=s.length() && s.length()<=100){
    	        cout<<getMinimumBalloonsToReplace(s)<<endl;
    	    }
	    }
	}
	
	return 0;
}
