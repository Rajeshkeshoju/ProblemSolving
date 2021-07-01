//  https://www.codechef.com/problems/STEM0003

#include <iostream>
using namespace std;

int main() {
	int numbers[] = {3, 4, 5, 6, 7, 8, 9, 10, 11, 12};
	int size = sizeof(numbers) / sizeof(numbers[0]);
	int product = 1;
	
	for(int i:numbers){
	    product *= i;
	}
	
	cout<<product<<endl;
	
	return 0;
}
