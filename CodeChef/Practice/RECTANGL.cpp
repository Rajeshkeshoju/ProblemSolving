//  https://www.codechef.com/problems/RECTANGL

#include <iostream>
using namespace std;

bool isRectangle(int a, int b, int c, int d){
    if(a==b && c==d){
        return true;
    }else if(a==d && c==b){
        return true;
    }else if(a==c && b==d){
        return true;
    }
    return false;
}

int main() {
    
    int T=0;
    cin>>T;
    
    if(1<=T && T<=1000){
	    int a,b,c,d;
	    
        while(T--){
            cin>>a>>b>>c>>d;
            
            isRectangle(a,b,c,d) ? cout<<"YES" : cout<<"NO";
            cout<<endl;
        }
    }
    
	return 0;
}
