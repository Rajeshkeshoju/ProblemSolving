#include <iostream>
using namespace std;

int countInitialConsecutiveZeroesInArray(int* arr, int n){
    int low = 0;
    int high = n-1;
    
    int mid = low;
    int lastZeroIndex = -1;
    
    while(low <= high){
        mid = low + (high - low)/2;
        
        if(arr[mid] == 0){
            lastZeroIndex = mid;
            low = mid+1;
        }else{
            high = mid-1;
        }
    }
    
    return lastZeroIndex + 1;
}

int main()
{
    int n = 0;
    cin >> n;
    
    int* arr = new int[n];
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    
    cout << countInitialConsecutiveZeroesInArray(arr, n);

    return 0;
}
