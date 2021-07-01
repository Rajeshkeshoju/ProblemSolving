//  https://www.codechef.com/problems/STEM0006

#include <iostream>
using namespace std;

int getTetrahedralNumber(int n){
    return (n * (n+1) * (n+2))/6;
}

int main() {
	cout<<getTetrahedralNumber(6);
	return 0;
}
