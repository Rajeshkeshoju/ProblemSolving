#include <iostream>
using namespace std;

void binarySearchSumOfThree(int* arr, int n, int sum){
    int low = 0;
    int high = n-1;
    
    if(sum <= arr[0]){
        return;
    }
    
    int mid = (low + high) / 2;
    int x = 0;
    
    while(low < high){
        x = arr[low] + arr[mid] + arr[high];
        
        if(x == sum){
            cout << arr[low] << " " << arr[mid] << " " << arr[high];
            return;
        }else if(x > sum){
            high--;
        }else{
            low++;
        }
    }
}

int main()
{
    int n = 0;
    cin >> n;
    
    int* arr = new int[n];
    
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    
    int sum = 0;
    cin >> sum;
    
    binarySearchSumOfThree(arr, n, sum);

    return 0;
}
