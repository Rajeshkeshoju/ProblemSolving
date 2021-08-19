//  https://www.codechef.com/AUG21C/problems/PROBDIFF

#include <iostream>
#include <vector>
#include <set>
#include <algorithm>
using namespace std;

int isValid(int value = 0){
    return 1<=value && value<=10;
}

int getMaxNumberOfProblemSetsCanCreate(int* problems, int problemsCount = 0){
    int maxProblemSets = 0;
    set<int> distinctValues;
    
    for(int i=0; i<problemsCount; i++){
        distinctValues.insert(problems[i]);
    }
    
    int size = distinctValues.size();
    
    if(size == 1){
        return maxProblemSets;
    }
    
    if(size == 4 || size == 3){
        maxProblemSets = 2;
    }else if(size == 2){
        sort(problems, problems + problemsCount);
        
        int x = problems[0];
        int count = 0;
        for(int i=0; i<problemsCount; i++){
            if(x == problems[i]){
                count++;
            }
        }
        
        if(count == 2){
            maxProblemSets = 2;
        }else{
            maxProblemSets = 1;
        }
    }
    
    return maxProblemSets;
}

int main() {
	int T = 0;
	cin >> T;
	
	if(1<=T && T<=1000){
	    const int TOTAL_PROBLEMS = 4;
	    int problems[TOTAL_PROBLEMS];
	    int difficulty = 0;
	    
	    while(T--){
	        
	        for(int i=0; i<TOTAL_PROBLEMS; i++){
	            cin >> difficulty;
	            
	            if(isValid(difficulty)){
	                problems[i] = difficulty;
	            }
	        }
    	    
    	    cout << getMaxNumberOfProblemSetsCanCreate(problems, TOTAL_PROBLEMS);
    	    cout << endl;
	    }
	}
	
	return 0;
}
