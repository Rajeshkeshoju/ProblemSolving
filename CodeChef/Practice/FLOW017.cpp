//  https://www.codechef.com/problems/FLOW017

#include <bits/stdc++.h>
using namespace std;

int getSecondLargest(int* list,int length){
    
    sort(list,list+length);
    return list[length - 2];
    
}

int main() {
	
	int T;
	cin>>T;
	
	if(1<=T && T<=1000){
	    
	    while(T--){
	        int SIZE = 3;
	        
	        int nums[SIZE];
	        for(int i=0; i<SIZE; i++){
	            cin>>nums[i];
	        }
	        
	        cout<<getSecondLargest(nums,SIZE)<<endl;
	        
	    }
	    
	}
	
	return 0;
}
