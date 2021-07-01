//  https://www.codechef.com/problems/AREAPERI

#include <iostream>
using namespace std;

int getArea(int l, int b){
    return l * b;
}

int getPerimeter(int l, int b){
    return 2 * (l+b);
}

int main() {
	
	int l=0, b=0;
	cin>>l>>b;
	
	if((1<=l && l<=1000) && (1<=b && b<=1000)){
	    int area = getArea(l,b);
	    int perimeter = getPerimeter(l,b);
	    
	    if(area > perimeter){
	        cout<<"Area"<<endl;
	        cout<<area;
	    }else if(area < perimeter){
	        cout<<"Peri"<<endl;
	        cout<<perimeter;
	    }else{
	        cout<<"Eq"<<endl;
	        cout<<area;
	    }
	}
	
	return 0;
}
