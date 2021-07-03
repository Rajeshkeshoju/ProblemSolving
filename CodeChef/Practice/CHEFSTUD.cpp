//  https://www.codechef.com/problems/CHEFSTUD

#include <iostream>
using namespace std;

struct ConfigurationOfStudents{
    
    const char STUDYING = '*';
    const char TALKING_TO_RIGHT = '>';
    const char TALKING_TO_LEFT = '<';
}config;


char changePositionOfStudent(char position){
    
    if(position == config.TALKING_TO_LEFT){
        position = config.TALKING_TO_RIGHT;
    }else if(position == config.TALKING_TO_RIGHT){
        position = config.TALKING_TO_LEFT;
    }
    
    return position;
}


int countTalkingStudents(string students = ""){
    int talkingStudentsCount = 0;
    
    for(int i=0; i<students.size()-1; i++){ 
        if(students[i] == config.TALKING_TO_RIGHT
        && students[i+1] == config.TALKING_TO_LEFT){
            talkingStudentsCount++;
        }
    }
    
    return talkingStudentsCount;
}


int getNumberOfStudentsToBePunished(string students = ""){
    string alteredStudents = "";
    
    for(char i: students){
        alteredStudents += changePositionOfStudent(i);
    }
    
    return countTalkingStudents(alteredStudents);
}

int main() {
    
    int T = 0;
    cin>>T;
    
    if(1<=T && T<=10){
        string students = "";
        
        while(T--){
            cin >> students;
            
            if(1<=students.size() && students.size()<=100000){
                
                cout << getNumberOfStudentsToBePunished(students);
                cout << endl;
            }
        }
    }
    
	return 0;
}
