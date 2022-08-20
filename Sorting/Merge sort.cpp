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
