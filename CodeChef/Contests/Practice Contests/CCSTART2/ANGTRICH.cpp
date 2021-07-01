//  https://www.codechef.com/CCSTART2/problems/ANGTRICH

#include <iostream>

using namespace std;

int main(){

    float a,b,c;
    cin>>a>>b>>c;
    
    if((a>0 && b>0 && c>0) && (a+b+c == 180.0)){
        cout<<"YES";
    }else{
        cout<<"NO";
    }
    cout<<endl;
    
    return 0;
}
