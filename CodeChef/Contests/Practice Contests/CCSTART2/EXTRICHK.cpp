//  https://www.codechef.com/CCSTART2/problems/EXTRICHK

#include <iostream>
using namespace std;

int checkTriangle(int a, int b, int c){
    if(a==b && b==c){
        return 1;
    }else{
        
        if((a+b > c) && (b+c > a) && (c+a > b)){
            if(a==b || b==c || c==a){
                return 2;
            }else{
                return 3;
            }
        }else{
            return -1;
        }
        
    }
}

int main(){

   int a,b,c;
   cin>>a>>b>>c;
   
   cout<<checkTriangle(a,b,c)<<endl;
   
   return 0;
}
