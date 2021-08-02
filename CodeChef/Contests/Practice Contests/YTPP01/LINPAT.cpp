//  https://www.codechef.com/YTPP001/problems/LINPAT

#include <iostream>
using namespace std;

void printPattern(int num1, int num2, int patternLength){
    if(patternLength > 0){
        cout << num1 << " " << num2 << " ";
        printPattern(num1 + 10, num2 + 2, --patternLength);
    }
}

int main() {
	int N = 0;
	cin >> N;
	
	if(1<=N && N<=1000){
	    printPattern(10, 2, N/2);
	}
	
	return 0;
}
