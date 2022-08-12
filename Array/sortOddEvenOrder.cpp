/***

* Sort array such that all odd numbers comes first and then even numbers
* Sort it IN-PLACE 
* TC : O(N)
* SC : O(1)

***/

#include <iostream>
#include <vector>
using namespace std;

void swap(int& a, int& b) {
    if(a == b) {
        return;
    }
    
    a = a + b;
    b = a - b;
    a = a - b;
}

void print(vector<int>& arr) {
    for(auto it: arr) {
        cout << it << " "; 
    }
    cout << endl;
}

void sortArray(vector<int>& arr, int n) {
    
    int i = 0;
    int j = n-1;
    
    int x = 0;
    int y = 0;
    
    while(i < j) {
        x = arr[i] & 1;
        y = arr[j] & 1;
        
        if(!x and y) {
            swap(arr[i], arr[j]);
            print(arr);
            i++;
        } else if(x and y) {
            swap(arr[i+1], arr[j]);
            print(arr);
            i+=2;
            j--;
        } else if(!x and !y) {
            swap(arr[i], arr[j-1]);
            print(arr);
            i++;
        } else if(x and !y) {
            print(arr);
            j--;
        }
    }
}

int main()
{
    int n = 0;
    cin >> n;
    
    vector<int> arr(n, 0);
    
    for(int i=0; i<n; i++) {
        cin >> arr[i];
    }
    
    sortArray(arr, n);
    print(arr);

    return 0;
}
