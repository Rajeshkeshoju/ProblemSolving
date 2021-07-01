//  https://www.codechef.com/CCSTART2/problems/DIFACTRS

#include <iostream>
#include <vector>

using namespace std;

int main() {
	
	int N=0;
	cin>>N;
	vector<int> factors;
	
	for(int i=1; i<=N; i++){
	    if(N%i == 0){
	        factors.push_back(i);
	    }
	}
	cout<<factors.size()<<endl;
	for(int i:factors){
	    cout<<i<<" ";
	}
	
	return 0;
}
