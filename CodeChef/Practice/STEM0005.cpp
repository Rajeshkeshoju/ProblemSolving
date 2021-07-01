//  https://www.codechef.com/problems/STEM0005

#include <iostream>
using namespace std;

int findDigitFive(int* numbers, int size){
    for(int i=0; i<size; i++){
        if(numbers[i] == 5){
            return 1;
        }
    }
    return 0;
}

int main() {
	
	int numbers[] = {12, 65, 4, 67, 987, 234, 87, 89, 6745, 567, 987, 476, 708, 36, 5587, 798, 884, 671, 7889};
	int size = sizeof(numbers) / sizeof(numbers[0]);
	
	if(findDigitFive(numbers,size)){
	    cout<<"Hello World!";
	}else{
	    cout<<"there is no 5 in the array";
	}
	
	cout<<endl;
	
	return 0;
}
