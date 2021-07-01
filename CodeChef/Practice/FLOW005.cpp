//  https://www.codechef.com/problems/FLOW005

#include <iostream>
using namespace std;

int minimumNotes(int amount){
    
    int notes[] = {100,50,10,5,2,1};
    int countNotes = 0;
    
    for(int note : notes){
        countNotes += (amount/note);
        amount %= note;
    }
    
    return countNotes;
}

int main() {
	
	int T;
	cin>>T;
	
	if(1<=T && T<=1000){
	    
	    while(T--){
	        long int amount = 0;
	    
    	    cin>>amount;
    	    if(1<=amount && amount<=1000000){
    	        cout<<minimumNotes(amount)<<endl;
    	    }
	        
	    }
	    
	}
	
	return 0;
}
