//  https://www.codechef.com/START9C/problems/BLACKCEL

#include <iostream>
#define isEven(x) (x % 2) == 0
using namespace std;

int getCountOfBlackCellsInChessboard(int n){
    return (n * n) / 2;
}

int main() {
	int n = 0;
	cin >> n;
	
	if(2<=n && n<=100 && isEven(n)){
	    cout << getCountOfBlackCellsInChessboard(n);
	}
	
	return 0;
}
