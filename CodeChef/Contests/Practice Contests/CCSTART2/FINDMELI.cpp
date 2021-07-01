//  https://www.codechef.com/CCSTART2/problems/FINDMELI

#include <iostream>
using namespace std;

int contains(int* nums, int size, int key){
    for(int i=0; i<size; i++){
        if(nums[i] == key){
            return 1;
        }
    }
    return -1;
}

int main() {
    
    int N=0,K=0;
    cin>>N>>K;
	
	int nums[N];
	for(int i=0; i<N; i++){
	    cin>>nums[i];
	}
	
	cout<<contains(nums, N, K);
	return 0;
}
