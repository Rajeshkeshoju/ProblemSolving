//  https://www.codechef.com/YTPP001/problems/LSTSEV

#include <iostream>
#include <vector>
using namespace std;

bool doesItContainSeven(int number = 0){
    vector<int> numberVector;
    
    while(number > 0){
        numberVector.push_back(number % 10);
        number /= 10;
    }
    
    return numberVector[1] == 7;
}

int main() {
    int number = 0;
    cin >> number;
	
	if(doesItContainSeven(number)){
	    cout << 1;
	}else{
	    cout << 0;
	}
	
	return 0;
}
