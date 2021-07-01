//  https://www.codechef.com/problems/CIELRCPT

#include <iostream>
#include <vector>
using namespace std;

int getMinimumItemsToOrder(vector<int> menu, long int price=0){
    int minimumItemsToOrder = 0;
    
    for(int item=menu.size()-1; item>=0; item--){
        minimumItemsToOrder += price / menu[item];
        price %= menu[item];
    }
    
    return minimumItemsToOrder;
}

int main() {
    int T = 0;
    cin>>T;
    
    if(1<=T && T<=5){
        long int price = 0;
        vector<int> itemPrice{1,2,4,8,16,32,64,128,256,512,1024,2048};
        
        while(T--){
            cin>>price;
            
            if(1<=price && price<=100000){
                cout<<getMinimumItemsToOrder(itemPrice, price)<<endl;
            }
        }
    }
    
	return 0;
}
