//  https://cses.fi/problemset/task/1083/

#include <iostream>
using namespace std;
 
long long sum(long long n) {
    return (n * (n+1)) / 2;
}
 
int missingNumber(int* arr, long long n) {
    long long arraySum = 0;
    
    for(long long i=0; i<n-1; i++) {
        arraySum += arr[i];
    }
    
    return sum(n) - arraySum;
}
 
int main()
{
    long long n = 0;
    cin >> n;
    
    int* arr = new int[n-1];
    for(long long i=0; i<n-1; i++) {
        cin >> arr[i];
    }
    
    cout << missingNumber(arr, n);
 
    return 0;
}
