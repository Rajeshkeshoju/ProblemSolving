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
