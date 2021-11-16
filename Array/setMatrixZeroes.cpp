#include <iostream>
using namespace std;

// Setting matrix zeroes using auxiliary space O(m + n)
int main()
{
    int m = 0;
    int n = 0;
    
    cin >> m >> n;
    
    int** arr = new int*[m];
    for(int i=0; i<m; i++){
        arr[i] = new int[n];
    }
    
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            cin >> arr[i][j];
        }
    }
    
    int* rows = new int[m];
    int* cols = new int[n];
    
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            if(arr[i][j] == 0){
                rows[i] = -1;
                cols[j] = -1;
            }
        }
    }
    
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            if(rows[i] == -1 || cols[j] == -1){
                arr[i][j] = 0;
            }
        }
    }
    
    cout << "\n";
    
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            cout << arr[i][j] << " ";
        }
        
        cout << "\n";
    }

    return 0;
}
