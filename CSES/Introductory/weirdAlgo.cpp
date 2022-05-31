//  https://cses.fi/problemset/task/1068/

#include <iostream>
using namespace std;
 
void weirdAlgorithm(long long n) {
    cout << n;
    
    while(n != 1) {
        if(n & 1) {
            n *= 3;
            n += 1;
        }else {
            n /= 2;
        }
        
        cout << " " << n;
    }
}
 
int main()
{
    long long n = 0;
    cin >> n;
    
    weirdAlgorithm(n);
 
    return 0;
}
