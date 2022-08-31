/***

* m = 6, arr1 = [5, 9, 10, 0, 0, 0]
* n = 3, arr2 = [4, 6, 9]
* output = arr1 = [4, 5, 6, 9, 9, 10]

***/

#include <bits/stdc++.h>
using namespace std;

void merge(int* arr1, int* arr2, int m, int n) {
    int k = m-1;
    
    int i = 0;
    for(int x=0; x<m; x++) {
        if(arr1[x] == 0) {
            i = x-1;
            break;
        }
    }
    
    int j = n-1;
    
    while(i>=0 && j>=0) {
        if(arr1[i] > arr2[j]) {
            swap(arr1[k], arr1[i]);
            i--;
        } else {
            swap(arr1[k], arr2[j]);
            j--;
        }
        
        k--;
    }
    
    while(i >= 0) {
        swap(arr1[k], arr1[i]);
        i--;
        k--;
    }
    
    while(j >= 0) {
        swap(arr1[k], arr2[j]);
        j--;
        k--;
    }
}

int main()
{
    int m = 0;
    int n = 0;
    
    cin >> m >> n;
    int arr1[m];
    int arr2[n];
    
    for(int i=0; i<m; i++) {
        cin >> arr1[i];
    }
    
    for(int i=0; i<n; i++) {
        cin >> arr2[i];
    }
    
    merge(arr1, arr2, m, n);
    for(int i=0; i<m; i++) {
        cout << arr1[i] << " ";
    }

    return 0;
}
