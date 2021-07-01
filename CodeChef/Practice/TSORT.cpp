//  https://www.codechef.com/problems/TSORT

#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main() {
    
    long int t;
    cin>>t;
    
    if(0<t && t<=1000000){
        int array[t];
        
        long int size = t;
        
        for(int i=0; i<t; i++){
            cin>>array[i];
        }
            
        sort(array,array + size);
            
        for(int i: array){
            cout<<i<<endl;
        }
    }
	
	return 0;
}
