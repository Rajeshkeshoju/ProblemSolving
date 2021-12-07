//  https://www.codechef.com/START18C/problems/MAKEEQUAL

#include <iostream>
#include <map>
using namespace std;

int getMinMovesToMakeArrayEqual(int* arr, int N){
    map<int, int> mp;
    
    for(int i=0; i<N; i++){
        mp[arr[i]]++;
    }
    
    if(mp.size() == 1){
        return 0;
    }
    
    return ((--mp.end()) -> first) - (mp.begin() -> first);
}

int main() {
    
	int t = 0;
	cin >> t;
	
	int N = 0;
	
	while(t--){
	    cin >> N;
	    int* arr = new int[N];
	    
	    for(int i=0; i<N; i++){
	        cin >> arr[i];
	    }
	    
	    cout << getMinMovesToMakeArrayEqual(arr, N);
	    cout << "\n";
	}
	
	return 0;
}
