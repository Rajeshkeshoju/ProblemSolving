//  https://www.codechef.com/problems/RECTSQ

#include <iostream>
using namespace std;

int gcd(int a, int b){
    
    while(a != b){
        if(a > b){
            a -= b;
        }else {
            b -= a;
        }
    }
    
    return a;
}

int getMinimumPossibleSquarePlots(int length, int breadth){
    
    int squarableNumber = gcd(length, breadth);
    return (length * breadth) / (squarableNumber * squarableNumber);
}

int main() {
    
    int T = 0;
    cin>>T;
    
    if(1<=T && T<=20){
        int length = 0;
        int breadth = 0;
        
        while(T--){
            cin >> length;
            cin >> breadth;
            
            if(1<=length && length<=10000
            && 1<=breadth && breadth<=10000){
                
                cout << getMinimumPossibleSquarePlots(length, breadth);
                cout << endl;
            }
        }
    }
    
	return 0;
}
