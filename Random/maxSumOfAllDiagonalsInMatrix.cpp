#include <iostream>
using namespace std;

int main()
{
    int m = 0;
    int n = 0;
    cin >> m >> n;
    
    int** matrix = new int*[m];
    for(int i=0; i<m; i++){
        matrix[i] = new int[n];
    }
    
    for(int i=0;i<m; i++){
        for(int j=0; j<n; j++){
            cin >> matrix[i][j];
        }
    }
    
    int i = 0;
    int j = 0;
    
    int x = 0;
    int y = 0;
    
    int sum = 0;
    int maxSum = 0;
    
    while(x<m || y<n){
        i = x;
        j = y;
        
        sum = 0;
        
        while(i<m && j>=0){
            sum += matrix[i++][j--];
        }
        
        if(sum > maxSum){
            maxSum = sum;
        }
        
        if(y < n){
            y++;
        }else{
            x++;
        }
    }
    
    y = n-1;
    x = 0;
    
    while(x<m || y>0){
        i = x;
        j = y;
        
        sum = 0;
        
        while(i<m && j<n){
            sum += matrix[i++][j++];
        }
        
        if(sum > maxSum){
            maxSum = sum;
        }
        
        if(y == 0){
            x++;
        }else{
            y--;
        }
    }
    
    cout << maxSum;

    return 0;
}
