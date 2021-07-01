//  https://www.codechef.com/problems/HEADBOB

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int isIndian(vector<char> gesture){
    return count(gesture.begin(), gesture.end(), 'I');
}

int isForeigner(vector<char> gesture){
    return count(gesture.begin(), gesture.end(), 'Y');
}

int main() {
	
	int T=0;
	cin>>T;
	
	if(1<T && T<=1000){
	    while(T--){
	        
	        int N=0;
	        cin>>N;
	    
    	    if(1<=N && N<=1000){
    	        vector<char> gesture;
    	        for(int i=0; i<N; i++){
    	            char sign;
    	            cin>>sign;
    	            
    	            gesture.push_back(sign);
    	        }
    	        
    	        if(isIndian(gesture)){
    	            cout<<"INDIAN";
    	        }else if(isForeigner(gesture)){
    	            cout<<"NOT INDIAN";
    	        }else{
    	            cout<<"NOT SURE";
    	        }cout<<endl;
    	    }
	        
	    }
	}
	
	return 0;
}
