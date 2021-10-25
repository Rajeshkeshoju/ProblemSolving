#include <iostream>
using namespace std;

void printOutlineDiamond(int n, const char STAR){
    char** a = new char*[n];
        
    for(int i=0; i<n; i++){
        a[i] = new char[n];
    }
    
    int first = n/2;
    int second = first;
    
    for(int i=0; i<n/2; i++){
        a[i][first] = STAR;
        a[i][second] = STAR;
        
        first--;
        second++;
    }
    
    for(int i=n/2; i<n; i++){
        a[i][first] = STAR;
        a[i][second] = STAR;
        
        first++;
        second--;
    }
    
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cout << a[i][j] << "  ";
        }cout<<endl<<endl;
    }
}

int main()
{
    const char STAR = '*';
    
    int n = 0;
    cin >> n;
    
    if(n > 0){
        printOutlineDiamond(n, STAR);
    }

    return 0;
}
