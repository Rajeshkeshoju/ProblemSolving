//  https://www.codechef.com/CCSTART2/problems/RNGEODD

#include <iostream>
using namespace std;

int main() {
	
	int L=0, R=0;
	cin>>L>>R;
	
	for(int i=L; i<=R; i++){
	    if(i%2){
	        cout<<i<<" ";
	    }
	}
	return 0;
}
