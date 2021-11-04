#include <iostream>
using namespace std;

void primesOfSieveOfEratosthenes(int n = 0){
    int* isPrime = new int[n+1];
    const int MARKED = 1;
    const int UNMARKED = 0;
    
    for(int i=2; i*i<=n; i++){
        if(isPrime[i] == UNMARKED){
            for(int j=i*i; j<=n; j+=i){
                isPrime[j] = MARKED;
            }
        }
    }
    
    cout << "Prime numbers below " << n << " : ";
    for(int i=2; i<=n; i++){
        if(isPrime[i] == UNMARKED){
            cout << i << " ";
        }
    }
}

int main()
{
    int n = 0;
    cin >> n;
    
    if(n >= 2){
        primesOfSieveOfEratosthenes(n);
    }

    return 0;
}
