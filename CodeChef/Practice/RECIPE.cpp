//  https://www.codechef.com/problems/RECIPE

#include <iostream>
#include <vector>
using namespace std;

int gcd(int a, int b){
    while(a != b){
        if(a > b){
            a -= b;
        }else{
            b -= a;
        }
    }
    
    return a;
}

int main() {
    int T = 0;
    cin>>T;
    
    if(1<=T && T<=100){
        int N = 0;
        
        while(T--){
            cin>>N;
            
            if(2<=N && N<=50){
                int item = 0;
                vector<int> ingredients;
                
                while(N--){
                    cin>>item;
                    ingredients.push_back(item);
                }
                
                int x = ingredients[0];
                for(int i=1; i<ingredients.size(); i++){
                    x = gcd(x,ingredients[i]);
                }
                    
                for(int i=0; i<ingredients.size(); i++){
                    cout<<ingredients[i]/x<<" ";
                }
                cout<<endl;
            }
        }
    }
    
	return 0;
}
