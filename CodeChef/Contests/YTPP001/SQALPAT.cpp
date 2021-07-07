//  https://www.codechef.com/YTPP001/problems/SQALPAT

#include <iostream>
using namespace std;

void printAlternativePattern(int N = 0){
    int num = 5;
    int start = 1;
    
    for(int i=0; i<N; i+=2){
        for(int i=start; i<=num; i++){
            cout << i << " ";
        }
        
        cout << endl;
        num += 5;
        start = num + 1;
        
        for(int i=num; i>(num - 5); i--){
            cout << i << " ";
        }
        
        cout << endl;
        num += 5;
    }
}

int main() {
	int N = 0;
	cin >> N;
	
	if(1<=N && N<=200){
	    printAlternativePattern(N);
	}
	
	return 0;
}
