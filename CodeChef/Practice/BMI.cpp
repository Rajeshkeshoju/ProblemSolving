//  https://www.codechef.com/problems/BMI

#include <iostream>
using namespace std;

int getBodyMassIndex(int mass=0, int height=0){
    return mass/(height * height);
}

int main() {
	
	int T = 0;
	cin>>T;
	
	if(1<=T <=20000){
	    int mass = 0;
	    int height = 0;
	    
	    while(T--){
	        cin>>mass>>height;
	        
	        if(
	            (1<=mass && mass<=10000)
	            && (1<=height && height<=100)
	        ){
	            int BMI = getBodyMassIndex(mass, height);
	            
	            if(BMI <= 18){
	                cout<<1;
	            }else if(19<=BMI && BMI<=24){
	                cout<<2;
	            }else if(25<=BMI && BMI<=29){
	                cout<<3;
	            }else if(BMI >= 30){
	                cout<<4;
	            }
	            
	            cout<<endl;
	        }
	    }
	}
	return 0;
}
