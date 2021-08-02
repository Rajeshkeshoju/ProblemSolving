//  https://www.codechef.com/LTIME98C/problems/BUTYPAIR

#include <bits/stdc++.h>
using namespace std;

int isBeautifulPair(int a, int b){
    float a1 = (a - b) / (float) a;
    float b1 = (a - b) / (float) b;
    
    return a1 < b1;
}

int getCountOfBeautifulPairs(int* nums, int N = 0){
    int beautifulPairsCount = 0;
    
    for(int i=0; i<N; i++){
        for(int j=0; j<N; j++){
            if((i != j) && isBeautifulPair(nums[i], nums[j]) && nums[i] != nums[j]){
                beautifulPairsCount++;
            }
        }
    }
    
    return beautifulPairsCount;
}

int main() {
    
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
	int T = 0;
	cin >> T;
	
	int N = 0;
	while(T--){
	    cin >> N;
	    int nums[N];
	    
	    for(int i=0; i<N; i++){
	        cin >> nums[i];
	    }
	    
	    cout << getCountOfBeautifulPairs(nums, N);
	    cout << endl;
	}
	
	return 0;
}
