//  https://www.codechef.com/YTPP001/problems/VALTRI

#include <iostream>
using namespace std;

int doesBusGoesToCorrectDirection(int busNumber = 0){
    return ((busNumber % 5) == 0) || ((busNumber % 6) == 0);
}

int main() {
	int busNumber = 0;
	cin >> busNumber;
	
	if(1<=busNumber && busNumber<=1000000){
	    if(doesBusGoesToCorrectDirection(busNumber)){
	        cout << "YES";
	    }else{
	        cout << "NO";
	    }
	    cout << endl;
	}
	
	return 0;
}
