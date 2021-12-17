#include <iostream>
using namespace std;

void selectionSort(int* arr, int n){
    int min = 0;
    
    for(int i=0; i<n; i++){
        min = i;
        
        for(int j=i+1; j<n; j++){
            if(arr[j] < arr[min]){
                min = j;
            }
        }
        
        swap(arr[min], arr[i]);
    }
}

bool isArrayPalindrome(int* arr, int low, int high, bool isPalindrome = true){
    if(low >= high){
        return isPalindrome;
    }
    
    if(arr[low] != arr[high]){
        return isPalindrome = false;
    }
    
    return isArrayPalindrome(arr, low+1, high-1, isPalindrome);
}

int findKey(int* arr, int low, int high, int key){
    if(low > high){
        return -1;
    }
    
    if(arr[low] == key){
        return low;
    }
    
    if(arr[high] == key){
        return high;
    }
    
    return findKey(arr, low+1, high-1, key);
}

int main()
{
    int n = 0;
    cin >> n;
    
    int* arr = new int[n];
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    
    cout << isArrayPalindrome(arr, 0, n-1);
    
    int key = 0;
    cin >> key;
    cout << findKey(arr, 0, n-1, key);
    
    selectionSort(arr, n);
    
    for(int i=0; i<n; i++){
        cout << arr[i] << " ";
    }
    return 0;
}
