//  https://www.codechef.com/problems/PALL01

#include <iostream>
using namespace std;

int isPalindrom(int number){
    
    int remainder = 0;
    int sum = 0;
    int num = number;
    
    while(number > 0){
        
        remainder = number % 10;
        sum = (sum * 10) + remainder;
        number /= 10;
        
    }
    
    return sum == num;
    
}

int main() {
	
	int T;
	cin>>T;
	
	if(1<T && T<=20){
	    
	    while(T--){
	        
	        int N;
	        cin>>N;
	        
	        if(1<=N && N<=20000){
	            
	            isPalindrom(N) ? cout<<"wins" : cout<<"loses";
	            
	            cout<<endl;
	            
	        }
	        
	    }
	    
	}
	
	return 0;
}
