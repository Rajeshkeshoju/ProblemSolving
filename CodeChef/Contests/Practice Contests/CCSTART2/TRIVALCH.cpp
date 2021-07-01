//  https://www.codechef.com/CCSTART2/problems/TRIVALCH

#include <iostream>
#include <cmath>
using namespace std;

double getArea(int a, int b, int c){
    double s = (double)(a+b+c)/2;
    return sqrt(s * (s-a) * (s-b) * (s-c));
}

int main() {
	
	int a,b,c;
	cin>>a>>b>>c;
	
	if(getArea(a,b,c) > 0){
	    cout<<"YES";
	}else{
	    cout<<"NO";
	}
	
	return 0;
}
