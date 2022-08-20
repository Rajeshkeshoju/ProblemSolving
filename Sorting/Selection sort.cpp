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
