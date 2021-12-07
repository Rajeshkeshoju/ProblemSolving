//  https://www.codechef.com/START18C/problems/MINDAYSRET

#include <iostream>
#include <cmath>
using namespace std;

int getMinDaysToGetBackToSchool(int totalStudents, int studentsOnSingleDay){
    return ceil(totalStudents/(float)studentsOnSingleDay);
}

int main() {
	
	int t = 0;
	cin >> t;
	
	int totalStudents = 0;
	int studentsOnSingleDay = 0;
	
	while(t--){
	    cin >> totalStudents;
	    cin >> studentsOnSingleDay;
	    
	    cout << getMinDaysToGetBackToSchool(totalStudents, studentsOnSingleDay);
	    cout << "\n";
	}
	
	return 0;
}
