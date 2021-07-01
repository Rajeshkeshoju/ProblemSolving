//  https://www.codechef.com/problems/HS08TEST

#include <iostream>
using namespace std;

int main() {
	
	float amount=0, balance=0;
	float serviceCharge = 0.50;
	cin>>amount>>balance;
	
	if(0 < amount <= 2000 && 0 <= balance <= 2000){
	    if((int)amount%5 == 0 && (amount+serviceCharge) <= balance){
	       balance = balance - amount - serviceCharge;   
	    }
	}
	
	cout<<balance;
	
	return 0;
}
