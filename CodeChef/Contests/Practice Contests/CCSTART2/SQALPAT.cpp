//  https://www.codechef.com/CCSTART2/problems/SQALPAT

#include <iostream>
using namespace std;

int main(){

    int N;
    cin>>N;
    
    if(1<=N && N<=200){
        int counter=1;
        N /= 2;
        
        while(N--){
            
            for(int i=1; i<=5; i++){
                cout<<counter++<<" ";
            }
            
            cout<<endl;
            
            counter += 4;
            
            for(int i=5; i>=1; i--){
                cout<<counter--<<" ";
            }
            counter+= 6;
            cout<<endl;
        }
        
    }
    
    return 0;
}
