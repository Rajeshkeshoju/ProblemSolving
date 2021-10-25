#include <iostream>
using namespace std;

int main()
{
    int n = 0;
    cin >> n;
    
    int** a = new int*[n];
 
    for (int i=0; i<n; i++) {
        a[i] = new int[n];
    }
    
    int i=1;
    
    for(int k = n-1; k>=0; k--){
        if(k % 2 == 0){
            for(int j=n-1; j>=0; j--){
                a[k][j] = i++;
            }
        }else{
            for(int j=0; j<n; j++){
                a[k][j] = i++;
            }
        }
    }
    
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cout << a[i][j] << " ";
        }cout << endl;
    }
    
    int h = 0;
    int s = 0;
    cin >> h >> s;
    int col = 0;
    int row = 0;
    
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if(a[i][j] == h){
                col = j;
                row = i;
                break;
            }
        }
    }
    
    for(int i=row; i>=0; i--){
        cout << a[i][col] << endl;
    }

    return 0;
}
