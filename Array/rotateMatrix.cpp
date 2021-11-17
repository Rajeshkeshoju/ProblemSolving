//  Rotate matrix 90 degrees clock-wise

#include <iostream>
using namespace std;

int main()
{   
    //  Using auxiliary space O(m * n)
    int m = 0;
    int n = 0;
    
    cin >> m >> n;
    
    int** matrix = new int*[m];
    for(int i=0; i<m; i++){
        matrix[i] = new int[n];
    }
    
    int num = 0;
    
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            cin >> matrix[i][j];
        }
    }
    
    int k = n - 1;
    int** matrix2 = new int*[m];
    
    for(int i=0; i<m; i++){
        matrix2[i] = new int[n];
    }
    
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            matrix2[j][k] = matrix[i][j];
        }
        
        k--;
    }
    
    cout << "\n";
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            cout << matrix2[i][j] << " ";
        }
        cout << "\n";
    }
    
    return 0;
}
