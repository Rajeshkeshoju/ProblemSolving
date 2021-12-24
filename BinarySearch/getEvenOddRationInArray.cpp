#include <iostream>
using namespace std;

double getEvenOddRationInArray(int* arr, int n){
    int low = 0;
    int high = n-1;
    
    int mid = low;
    int lastEvenIndex = -1;
    
    while(low <= high){
        mid = low + (high - low)/2;
        
        if(arr[mid]%2 == 0){
            lastEvenIndex = mid;
            low = mid+1;
        }else{
            high = mid-1;
        }
    }
    
    int evenCount = lastEvenIndex + 1;
    int oddCount = (n-1) - (lastEvenIndex + 1) + 1;
    
    return evenCount / (double)oddCount;
}

int main()
{
    int n = 0;
    cin >> n;
    
    int* arr = new int[n];
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    
    cout << getEvenOddRationInArray(arr, n);

    return 0;
}
