#include <iostream>
using namespace std;

struct Search{
    int firstIndex = -1;
    int lastIndex = -1;
};

int getFirstOccurenceIndex(int* arr, int n, int element){
    int low = 0;
    int high = n-1;
    int mid = 0;
    
    int firstIndex = -1;
    
    if(element < arr[low] || arr[high] < element){
        return firstIndex;
    }
    
    while(low <= high){
        mid = (low+high) / 2;
        
        if(arr[mid] == element){
            firstIndex = mid;
            high = mid - 1;
        }else if(arr[mid] < element){
            low = mid + 1;
        }else{
            high = mid - 1;
        }
    }
    
    return firstIndex;
}

int getLastOccurenceIndex(int* arr, int n, int element){
    int low = 0;
    int high = n-1;
    int mid = 0;
    
    int lastIndex = -1;
    
    if(element < arr[low] || arr[high] < element){
        return lastIndex;
    }
    
    while(low <= high){
        mid = (low+high) / 2;
        
        if(arr[mid] == element){
            lastIndex = mid;
            low = mid + 1;
        }else if(arr[mid] < element){
            low = mid + 1;
        }else{
            high = mid - 1;
        }
    }
    
    return lastIndex;
}

Search binarySearchFirstAndLastindexOfElement(int* arr, int n, int element){
    Search search;
    search.firstIndex = getFirstOccurenceIndex(arr, n, element);
    search.lastIndex = getLastOccurenceIndex(arr, n, element);
    
    return search;
}

int main()
{
    int n = 0;
    cin >> n;
    
    int* arr = new int[n];
    
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    
    int element = 0;
    cin >> element;
    
    Search search = binarySearchFirstAndLastindexOfElement(arr, n, element);
    
    int count = search.lastIndex - search.firstIndex + 1;
    cout << count;

    return 0;
}
