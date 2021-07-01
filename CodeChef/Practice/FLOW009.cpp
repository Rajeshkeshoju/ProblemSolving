//  https://www.codechef.com/problems/FLOW009

#include <iostream>

#define DISCOUNT 10

using namespace std;

double applyDiscount(long int price, int percentage){
    double discount = ((double)percentage/100) * price;
    return price - discount;
}

int main() {
	
	int T;
	cin>>T;
	
	if(1<=T && T<=1000){
	    
	    while(T--){
	        
	        long int quantity=0,price=0;
	        cin>>quantity>>price;
	        
	        long double expenses = 0.0;
	        
	        if((1<=quantity && quantity<=100000) && (1<=price && price<=100000)){
	            
	            expenses = quantity * price;
	            
	            if(quantity > 1000){
	                expenses = applyDiscount(expenses,DISCOUNT);
	            }
	            
	            cout.precision(6);
	            cout<<fixed<<expenses<<endl;
	            
	        }
	        
	    }
	    
	}
	
	return 0;
}
