//  https://www.codechef.com/problems/STEM0001

#include <iostream>
using namespace std;

int main() {
	
	bool values[] = {true, false, true, true, false, false};
	int trueCount = 0;
	
	for(bool i: values){
	    if(i == true){
	        trueCount += 1;
	    }
	}
	
	cout<<trueCount;
	
	return 0;
}
