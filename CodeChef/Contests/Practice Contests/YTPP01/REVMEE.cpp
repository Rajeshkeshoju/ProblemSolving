//  https://www.codechef.com/YTPP001/problems/REVMEE

#include <iostream>
using namespace std;

int main() {
	int numberOfIntergers = 0;
	cin >> numberOfIntergers;
	
	int numbers[numberOfIntergers];
	
	for(int i=0; i<numberOfIntergers; i++){
	    cin >> numbers[i];
	}
	
	for(int i=numberOfIntergers-1; i>=0; i--){
	    cout << numbers[i] << " ";
	}
	
	return 0;
}
