//  https://www.codechef.com/YTPP001/problems/SECLAR

#include <iostream>
#include <set>
using namespace std;

int main() {
	set<int, greater<int>> numbers;
	int num = 0;
	
	while(cin >> num){
	    numbers.insert(num);
	}
	
	set<int>:: iterator it = numbers.begin();
	advance(it, 1);
	
	cout << *it;
	return 0;
}
