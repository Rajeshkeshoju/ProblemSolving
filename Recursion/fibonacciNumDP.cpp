#include <iostream>
using namespace std;

int fibonacciNumber(int* fib, int n){
    if(fib[n] != -1){
        //cout << "DP used on "<< n << " \n";
        return fib[n];
    }
    
    if(n == 0 || n == 1){
        fib[n] = n;
        return n;
    }
    
    return fib[n] = fibonacciNumber(fib, n-1) + fibonacciNumber(fib, n-2);
}

int main()
{
    int n = 0;
    cin >> n;
    
    int* fib = new int[n+1];
    for(int i=0; i<n+1; i++){
        fib[i] = -1;
    }
    
    cout << fibonacciNumber(fib, n);

    return 0;
}
