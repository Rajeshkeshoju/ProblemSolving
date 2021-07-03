//  https://www.codechef.com/problems/CHFINTRO

#include <iostream>
using namespace std;

int isForgetsToFlushTheOutput(int rating, int cutOffRating){
    return rating < cutOffRating;
}

int main() {
    
    int numberOfRatings = 0;
    int cutOffRating = 0;
    
    cin >> numberOfRatings;
    cin >> cutOffRating;
    
    if(1<=numberOfRatings && numberOfRatings<=1000
    && 1300<=cutOffRating && cutOffRating<=1501){
        int rating = 0;
        
        while(numberOfRatings--){
            cin >> rating;
            
            if(1300<=rating && rating<=1501){
                
                if(!isForgetsToFlushTheOutput(rating, cutOffRating)){
                    cout << "Good boi";
                }else {
                    cout << "Bad boi";
                }
                cout << endl;
            }
        }
    }
    
	return 0;
}
