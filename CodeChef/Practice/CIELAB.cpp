//  https://www.codechef.com/problems/CIELAB

#include <iostream>
using namespace std;

int main() {
    
    int A, B;
    cin >> A >> B;
    
    if(1<=A && A<=10000
    && 1<=B && B<=10000){
        
        int diff = A - B;
        
        if(diff % 10 == 9){
            cout << diff - 1;
        }else{
            cout << diff + 1;
        }
    }
    
	return 0;
}
