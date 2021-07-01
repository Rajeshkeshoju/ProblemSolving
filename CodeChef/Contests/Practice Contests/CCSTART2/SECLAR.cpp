//  https://www.codechef.com/CCSTART2/problems/SECLAR

#include <bits/stdc++.h>

using namespace std;

int main() {
	
	int arr[3];
	int size = sizeof(arr)/sizeof(arr[0]);
	
	for(int i=0; i<size; i++){
	    cin>>arr[i];
	}
	sort(arr,arr+size, greater<int>());
	cout<<arr[1];
	
	return 0;
}
