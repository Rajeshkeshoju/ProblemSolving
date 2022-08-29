#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

vector<vector<int>> getSubset(int* arr, int n) {
    vector<vector<int>> subset;
    
    for(int counter = 0; counter < pow(2, n); counter++) {
        vector<int> v;
        for(int j=0; j<n; j++) {
            if(counter & (1<<j)) {
                v.push_back(arr[j]);
            }
        }
        
        subset.push_back(v);
    }
    
    return subset;
}

int main()
{
    int n = 0;
    cin >> n;
    
    int arr[n];
    for(int i=0; i<n; i++) {
        cin >> arr[i];
    }
    
    vector<vector<int>> subset = getSubset(arr, n);
    for(vector<int> v: subset) {
        cout << "[ ";
        for(auto it: v) {
            cout << it << " ";
        }
        cout << "]"; 
        cout << endl;
    }

    return 0;
}
