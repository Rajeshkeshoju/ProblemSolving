//  https://www.codechef.com/problems/WEIGHTBL

#include <iostream>
using namespace std;

struct Weights{
    int initialWeight;
    int finalWeight;
}weights;

struct ResearchWeights{
    int minGainableWeight;
    int maxGainableWeight;
}researchWeights;

int doesHomeScaleGiveAccurateResults(
    Weights weights, 
    ResearchWeights researchWeights, 
    int numberOfMonthsOfLockdown){
        
        int gainedWeight = weights.finalWeight - weights.initialWeight;
        int minPossibleWeightIncrease = researchWeights.minGainableWeight * numberOfMonthsOfLockdown;
        int maxPossibleWeightIncrease = researchWeights.maxGainableWeight * numberOfMonthsOfLockdown;
        
        return (minPossibleWeightIncrease <= gainedWeight) 
        && (gainedWeight <= maxPossibleWeightIncrease);
    }

int main() {
	int T = 0;
	cin >> T;
	
	if(1<=T && T<=100000){
	    int numberOfMonthsOfLockdown = 0;
	    
	    while(T--){
	        cin >> weights.initialWeight;
    	    cin >> weights.finalWeight;
    	    
    	    cin >> researchWeights.minGainableWeight;
    	    cin >> researchWeights.maxGainableWeight;
    	    
    	    cin >> numberOfMonthsOfLockdown;
    	    
    	    cout << doesHomeScaleGiveAccurateResults(weights, 
    	                                            researchWeights, 
    	                                            numberOfMonthsOfLockdown);
    	    cout << endl;
	    }
	}
	
	return 0;
}
