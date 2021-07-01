//  https://www.codechef.com/problems/HOWMANY

#include <iostream>
using namespace std;

int getDigitsCount(long int number=0){
    int count = 0;
    
    while(number > 0){
        number /= 10;
        count++;
    }
    
    return count;
}

int main() {
    
    long int N = 0;
    cin>>N;
    
    if(0<=N && N<=1000000){
        int digitsCount = getDigitsCount(N);
        
        if(digitsCount <= 3){
            cout<<digitsCount;
        }else{
            cout<<"More than 3 digits";
        }
        cout<<endl;
    }
    
	return 0;
}
