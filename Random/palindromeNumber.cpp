#include <iostream>
#include <cmath>

using namespace std;

bool isPalindrome(int x) {
    if(x < 0){
        return false;
    }
    
    int n = x;
    int num = 0;
    int i = 0;
    
    while(n > 0){
        n /= 10;
        i++;
    }
    
    n = x;
    
    while(n > 0){
        num += (n % 10) * pow(10, --i);
        n /= 10;
    }
    
    return num == x;
}

int main()
{
    int x = 0;
    cin >> x;
    
    cout << isPalindrome(x);

    return 0;
}
