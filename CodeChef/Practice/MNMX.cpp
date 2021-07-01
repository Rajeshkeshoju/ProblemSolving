//  https://www.codechef.com/problems/MNMX

#include <bits/stdc++.h>
using namespace std;

long int getMinimumCost(long int* nums, long int size){
    sort(nums, nums+size);
    
    for(long int i=0; i<size-1; i++){
        if(nums[i] < nums[i+1]){
            return nums[i] * (size-1);
        }else if(nums[i] > nums[i+1]){
            return nums[i+1] * (size-1);
        }continue;
    }
}

int main() {
	
	int T=0;
	cin>>T;
	
	if(1<=T && T<=10){
	    long int N=0;
	    
	    while(T--){
	        cin>>N;
	        
	        if(2<=N && N<=50000){
	            long int nums[N];
	        
    	        for(int i=0; i<N; i++){
    	            cin>>nums[i];
    	        }
    	        
    	        cout<<getMinimumCost(nums,N)<<endl;
	        }
	    }
	}
	return 0;
}
