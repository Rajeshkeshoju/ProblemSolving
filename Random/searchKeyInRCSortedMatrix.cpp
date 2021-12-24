#include <iostream>
using namespace std;

struct MatrixIndex{
    int row;
    int column;
};

MatrixIndex searchKeyInRCSortedMatrix(int** arr, int m, int n, int target){
    int i = m-1;
    int j = 0;
    
    while(i >= 0 && j < n){
        if(arr[i][j] == target){
            MatrixIndex matrixIndex;
            matrixIndex.row = i;
            matrixIndex.column = j;
            
            return matrixIndex;
        }else if(arr[i][j] < target){
            j++;
        }else{
            i--;
        }
    }
    
    MatrixIndex matrixIndex;
    matrixIndex.row = -1;
    matrixIndex.column = -1;
    return matrixIndex;
}

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
    
    int target = 0;
    cin >> target;
    
    MatrixIndex matrixIndex = searchKeyInRCSortedMatrix(arr, m, n, target);
    cout << "Matrix" << "[" <<matrixIndex.row << "][" << matrixIndex.column << "]" << " = " << target ;

    return 0;
}
