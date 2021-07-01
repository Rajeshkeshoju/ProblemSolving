//  https://www.codechef.com/CCSTART2/problems/REVMEE

#include <iostream>
using namespace std;

int main() {
	
	int N;
	cin>>N;
	
	int nums[N];
	for(int i=0; i<N; i++){
	    cin>>nums[i];
	}
	
	for(int i=N; i>0; i--){
	    cout<<nums[i-1]<<" ";
	}
	return 0;
}
