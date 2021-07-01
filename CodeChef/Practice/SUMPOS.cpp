//  https://www.codechef.com/problems/SUMPOS

#include <iostream>
using namespace std;

int pairMe(int x=0, int y=0, int z=0){
    return (x == y+z) || (y == x+z) || (z == x+y);
}

int main() {
	
	int T = 0;
	cin>>T;
	
	int x, y, z;
	
	while(T--){
	    cin>>x>>y>>z;
	    bool xConstraint = 1<=x && x<=1000;
	    bool yConstraint = 1<=y && y<=1000;
	    bool zConstraint = 1<=z && z<=1000;
	    
	    if(xConstraint && yConstraint && zConstraint){
	        if(pairMe(x, y, z)){
	            cout<<"YES";
	        }else{
	            cout<<"NO";
	        }cout<<endl;
	    }
	}
	
	return 0;
}
