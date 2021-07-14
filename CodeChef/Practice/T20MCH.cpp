//  https://www.codechef.com/problems/T20MCH

#include <iostream>
using namespace std;

struct InningsConfig{
    const int OVERS_PER_INNING = 20;
    const int TRIES_PER_OVER = 6;
    const int SCORE_PER_OVER = TRIES_PER_OVER * 6;
}config;

bool hasTeamBPossibilityToWin(int teamAScore, int teamBScoreAsOfNow, int playedOvers){
    int oversLeft = config.OVERS_PER_INNING - playedOvers;
    int possibleToScore = oversLeft * config.SCORE_PER_OVER;
    
    return teamAScore < (teamBScoreAsOfNow + possibleToScore);
}

int main() {
	int teamAScore = 0;
	int teamBScoreAsOfNow = 0;
	int playedOvers = 0;
	
	cin >> teamAScore;
	cin >> playedOvers;
	cin >> teamBScoreAsOfNow;
	
	if(hasTeamBPossibilityToWin(teamAScore, teamBScoreAsOfNow, playedOvers)){
	    cout << "YES";
	}else{
	    cout << "NO";
	}
	
	return 0;
}
