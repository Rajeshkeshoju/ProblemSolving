#include <iostream>
using namespace std;

void print(int* arr, int n) {
    for(int i=0; i<n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void swap(int& a, int& b) {
    //a = a + b;
    //b = a - b;
    //a = a - b;
    
    int c = a;
    a = b;
    b = c;
}

void insertionSort(int* arr, int n) {
    int key = 0;
    int j = 0;
    
    for(int i=1; i<n; i++) {
        key = arr[i];
        j = i-1;
        
        while(j>=0 && arr[j] > key) {
            arr[j+1] = arr[j];
            j--;
        }
        
        arr[j+1] = key; 
    }
}

void selectionSort(int* arr, int n) {
    int mini = 0;
    
    for(int i=0; i<n-1; i++) {
        mini = i;
        
        for(int j=i+1; j<n; j++) {
            if(arr[mini] > arr[j]) {
                mini = j;
            }
        }
        
        swap(arr[mini], arr[i]);
    }
}

void bubbleSort(int* arr, int n) {
    
    for(int i=0; i<n-1; i++) {
        for(int j=i+1; j<n; j++) {
            
            if(arr[i] > arr[j]) {
                swap(arr[i], arr[j]);
            }
        }
    }
}

void merge(int* arr, int left, int mid, int right) {
    int i = left;
    int j = mid+1;
    
    int k = 0;
    int n = right - left + 1;
    
    int temp[n] = {0};
    while(i<=mid && j<=right) {
        if(arr[i] <= arr[j]) {
            temp[k++] = arr[i++];
        } else {
            temp[k++] = arr[j++];
        }
    }
    
    while(i <= mid) {
        temp[k++] = arr[i++];
    }
    
    while(j <= right) {
        temp[k++] = arr[j++];
    }
    
    k = 0;
    for(int i=left; i<=right; i++) {
        arr[i] = temp[k++];
    }
}

void mergeSort(int* arr, int left, int right) {
    if(left >= right) {
        return;
    }
    
    int mid = left + (right - left) /2;
    
    mergeSort(arr, left, mid);
    mergeSort(arr, mid+1, right);
    
    merge(arr, left, mid, right);
}

int main()
{
    int n = 0;
    cin >> n;
    
    int arr[n];
    for(int i=0; i<n; i++) {
        cin >> arr[i];
    }
    
    print(arr, n);
    
    //insertionSort(arr, n);
    //print(arr, n);
    
    //selectionSort(arr, n);
    //print(arr, n);
    
    //bubbleSort(arr, n);
    //print(arr, n);
    
    mergeSort(arr, 0, n-1);
    print(arr, n);

    return 0;
}
