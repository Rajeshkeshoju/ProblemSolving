//  https://www.codechef.com/YTPP001/problems/FINDMELI

#include <iostream>
using namespace std;

int main() {
	int numbersCount = 0;
	int keyToSearch  = 0;
	
	cin >> numbersCount;
	cin >> keyToSearch;
	
	bool isKeyFound = false;
	
	for(int i=0; i<numbersCount; i++){
	    int num = 0;
	    cin >> num;
	    
	    if(num == keyToSearch){
	        isKeyFound = true;
	        break;
	    }
	}
	
	if(isKeyFound){
	    cout << 1;
	}else{
	    cout << -1;
	}
	
	return 0;
}
