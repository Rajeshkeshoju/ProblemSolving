//  https://www.codechef.com/problems/FLOW011

#include <iostream>
using namespace std;

double applyPercent(unsigned int salary,int percentage){
    return ((double)percentage/100)*salary;
}

double getGrossSalary(unsigned int salary){
    double HRA = 0;
    double DA = 0;
    
    if(salary < 1500){
        HRA = applyPercent(salary,10);
        DA = applyPercent(salary,90);
    }else{
        HRA = 500;
        DA = applyPercent(salary,98);
    }
    
    return (double)salary + HRA + DA;
}

int main() {
	
	int T=0;
	cin>>T;
	
	if(1<T && T<=1000){
	    
	    while(T--){
	        
	        unsigned int salary = 0;
	        cin>>salary;
	        
	        if(1<=salary && salary<=100000){
	            cout.precision(2);
	            cout<<fixed<<getGrossSalary(salary)<<endl;
	        }
	        
	    }
	    
	}
	
	return 0;
}
