//  Dutch National Flag alogrithm

#include <iostream>
#include <set>

using namespace std;

void swap(int& a, int& b){
    a = a + b;
    b = a - b;
    a = a - b;
}

void sortArray(int* arr, int n){
    int low = 0;
    int mid = 0;
    int high = n - 1;
    
    while(mid <= high){
        switch(arr[mid]){
            case 0:
                swap(arr[low++], arr[mid++]);
                break;
            case 1:
                mid++;
                break;
            case 2:
                swap(arr[mid], arr[high--]);
                break;
        }
    }
}

int main(){
    
    int n = 0;
    cin >> n;
    
    int* arr = new int[n];
    
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    
    sortArray(arr, n);
    
    for(int i=0; i<n; i++){
        cout << arr[i] << " ";
    }
    
    return 0;
}
