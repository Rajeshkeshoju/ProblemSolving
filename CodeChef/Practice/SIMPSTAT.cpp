//  https://www.codechef.com/problems/SIMPSTAT

#include <iostream>
#include <set>
using namespace std;

double getAverage(set<int>& numbers, int numbersCount, int K = 0){
    int sum = 0;
    
    set<int>::iterator it = numbers.begin();
    advance(it, K);
    
    int index = K;
    while(index < numbersCount - K){
        sum += *it++;
        index++;
    }
    
    return sum / (double)(numbersCount - 2*K);
}

int main() {
    int T = 0;
    cin >> T;
    
    if(1<=T && T<=100){
        int N = 0;
        int K = 0;
        
        while(T--){
            cin >> N >> K;
            
            if(1<=N && N<=10000
            && 0<=2*K && 2*K<N
            ){
                set<int> numbers;
                int num = 0;
                
                for(int i=0; i<N; i++){
                    cin >> num;
                    
                    if(-1000000<=num && num<=1000000){
                        numbers.insert(num);
                    }
                }
                
                cout.precision(6);
                cout << fixed;
                cout << getAverage(numbers, N, K);
                cout << endl;
            }
        }
    }
    
	return 0;
}
