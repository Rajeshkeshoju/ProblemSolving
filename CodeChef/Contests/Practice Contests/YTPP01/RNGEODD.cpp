//  https://www.codechef.com/YTPP001/problems/RNGEODD

#include <iostream>
using namespace std;

int main() {
	int L, R;
	cin >> L >> R;
	
	for(int i=L; i<=R; i++){
	    if(i % 2){
	        cout << i << " ";
	    }
	}
	
	return 0;
}
