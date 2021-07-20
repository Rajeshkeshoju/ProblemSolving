//  https://www.codechef.com/problems/EXAM1

#include <iostream>
using namespace std;

int getChefsScore(string correctAnswers, string chefAnswers, int numberOfQuestions = 0){
    int chefsScore = 0;
    const char UNANSWERED = 'N';
    
    for(int i=0; i<numberOfQuestions; ){
        if(chefAnswers[i] == UNANSWERED){
            i++;
            continue;
        }
        
        if(chefAnswers[i] == correctAnswers[i]){
            chefsScore++;
            i++;
        }else{
            i += 2;
        }
    }
    
    return chefsScore;
}

int main() {
    
    int T = 0;
    cin>>T;
    
    if(1<=T && T<=100){
        int numberOfQuestions = 0;
        string correctAnswers = "";
        string chefAnswers = "";
        
        while(T--){
            cin >> numberOfQuestions;
            cin >> correctAnswers;
            cin >> chefAnswers;
            
            if(1<=numberOfQuestions && numberOfQuestions<=100){
                cout << getChefsScore(correctAnswers, chefAnswers, numberOfQuestions);
                cout << endl;
            }
        }
    }
    
	return 0;
}
