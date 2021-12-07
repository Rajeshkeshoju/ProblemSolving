#include <iostream>
using namespace std;

int getMinBS(int* arr, int n, int low, int high){
    int mid = (low + high) / 2; 
    
    if(arr[mid-1] > arr[mid] && arr[mid] < arr[mid+1]){
        return mid;
    }
    
    if(arr[mid] < arr[high]){
        return getMinBS(arr, n, low, mid-1);
    }
    
    return getMinBS(arr, n, mid+1, high);
}

int findElementBS(int* arr, int n, int target){
    int min = getMinBS(arr, n, 0, n-1);
    
    if(target == arr[min]){
        return min;
    }
    
    int low = 0;
    int mid = min;
    int high = n-1;
    
    if(target > arr[high] && target <= arr[min-1]){
        high = min-1;
    }else{
        low = min+1;
    }
    
    while(low <= high){
        mid = (low + high) / 2;
        
        if(arr[mid] == target){
            return mid;
        }
        
        if(target > arr[mid]){
            low = mid+1;
        }else{
            high = mid-1;
        }
    }
    
    return min;
}

int main()
{
    int n = 0;
    cin >> n;
    
    int* arr = new int[n];
    
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    
    int target = 0;
    cin >> target;
    
    cout << findElementBS(arr, n, target);

    return 0;
}
