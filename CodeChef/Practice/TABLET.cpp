//  https://www.codechef.com/problems/TABLET

#include <iostream>
using namespace std;

class Tablet{
    public:
        int width;
        int height;
        int price;
};

int getBestTabletInBudget(Tablet tablet, int bestChoice = 0){
    
    if(bestChoice < tablet.width * tablet.height){
        bestChoice = tablet.width * tablet.height;
    }
    
    return bestChoice;
}

int main() {
    
    int T = 0;
    cin>>T;
    
    if(1<=T && T<=100){
        int numberOfTablets = 0;
        int budget = 0;
        
        while(T--){
            cin>>numberOfTablets;
            cin>>budget;
            
            if((1<=numberOfTablets && numberOfTablets<=100) 
                && (1<=budget && budget<=1000000)){
                    
                    int bestChoice = 0;
                    
                    while(numberOfTablets--){
                        Tablet tablet;
                        
                        cin>>tablet.width;
                        cin>>tablet.height;
                        cin>>tablet.price;
                        
                        int widthConstraint = 1<=tablet.width && tablet.width<=10000;
                        int heightConstraint = 1<=tablet.height && tablet.height<=10000;
                        int priceConstraint = 1<=tablet.price && tablet.price<=1000000;
                        
                        if(widthConstraint && heightConstraint && priceConstraint){
                            if(tablet.price <= budget){
                                bestChoice = getBestTabletInBudget(tablet, bestChoice);
                            }
                        }
                    }
                    
                    if(bestChoice){
                        cout<<bestChoice;
                    }else{
                        cout<<"no tablet";
                    }
                    cout<<endl;
            }
        }
    }
    
	return 0;
}
