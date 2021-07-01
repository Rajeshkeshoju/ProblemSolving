//  https://www.codechef.com/problems/CCOOK

#include <bits/stdc++.h>
using namespace std;

struct Classifications{
    int totalProblems = 5;
    
    const string BEGINNER = "Beginner";
    const string JUNIOR_DEVELOPER = "Junior Developer";
    const string MIDDLE_DEVELOPER = "Middle Developer";
    const string SENIOR_DEVELOPER = "Senior Developer";
    const string HACKER = "Hacker";
    const string JEFF_DEAN = "Jeff Dean";
}classifications;


int getScore(vector<int> solvedProblems){
    int score = 0;
    
    for(int i=0; i<solvedProblems.size(); i++){
        score += solvedProblems[i];
    }
    return score;
}

string denoteClassificationBySolvedProblems(vector<int> solvedProblems){
    int score = getScore(solvedProblems);
    
    if(score == classifications.totalProblems){
        return classifications.JEFF_DEAN;
    }
    
    if(score == classifications.totalProblems - 1){
        return classifications.HACKER;
    }
    
    if(score == (classifications.totalProblems - 2)){
        return classifications.SENIOR_DEVELOPER;
    }
    
    if(score == classifications.totalProblems - 3){
        return classifications.MIDDLE_DEVELOPER;
    }
    
    if(score == classifications.totalProblems - 4){
        return classifications.JUNIOR_DEVELOPER;
    }
    
    return classifications.BEGINNER;
}

int main() {
    
    int numberOfContestants = 0;
    cin>>numberOfContestants;
    
    if(1<=numberOfContestants && numberOfContestants<=5000){
        
        while(numberOfContestants--){
            int totalProblems = classifications.totalProblems;
            vector<int> solvedProblems;
            int isProblemSolved = 0;
            
            while(totalProblems--){
                cin>>isProblemSolved;
                
                if(isProblemSolved == 0 || isProblemSolved == 1){
                    solvedProblems.push_back(isProblemSolved);
                }
            }
            
            cout<<denoteClassificationBySolvedProblems(solvedProblems);
            cout<<endl;
        }
    }
    
	return 0;
}
