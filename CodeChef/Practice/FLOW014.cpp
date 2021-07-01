//  https://www.codechef.com/problems/FLOW014

#include <iostream>
using namespace std;

int isHard(int hardness){
    return hardness > 50;
}

int isCarboned(double carbonContent){
    return carbonContent < 0.7;
}

int isTensiled(int tensileStrength){
    return tensileStrength > 5600;
}

int awardGrade(int hardness, double carbonContent, int tensileStrength){
    int grade  = 0;
    
    if(isHard(hardness) && isCarboned(carbonContent) && isTensiled(tensileStrength)){
        grade = 10;
    }else if(isHard(hardness) && isCarboned(carbonContent)){
        grade = 9;
    }else if(isCarboned(carbonContent) && isTensiled(tensileStrength)){
        grade = 8;
    }else if(isHard(hardness) && isTensiled(tensileStrength)){
        grade = 7;
    }else if(isHard(hardness) || isCarboned(carbonContent) || isTensiled(tensileStrength)){
        grade = 6;
    }else{
        grade = 5;
    }
    
    return grade;
}

int main() {
	
	int T = 0;
	cin>>T;
	
	if(1<T && T<=1000){
	    
    	int hardness = 0;
    	double carbonContent = 0.0;
    	int tensileStrength = 0;
    	
    	while(T--){
    	    cin>>hardness>>carbonContent>>tensileStrength;
    	    
    	    int hardnessConstraint = 0<=hardness && hardness<=10000;
    	    int carbonConstraint = 0<=carbonContent && carbonContent<=10000;
    	    int tensileConstraint = 0<=tensileStrength && tensileStrength<=10000;
    	    
    	    if(hardnessConstraint && carbonConstraint && tensileConstraint){
    	        
    	        cout<<awardGrade(hardness,carbonContent,tensileStrength)<<endl;
    	        
    	    }
    	}
	}
	
	return 0;
}
