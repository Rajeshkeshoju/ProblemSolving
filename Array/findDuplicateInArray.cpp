#include <iostream>
#include <unordered_map>

using namespace std;

int findDuplicate(int* arr, int n){
    unordered_map<int, int> map;
    int duplicate = 0;
    
    for(int i=0; i<n; i++){
        map[arr[i]]++;
    }
    
    for(auto it : map){
        if(it.second > 1){
            duplicate = it.first;
            break;
        }
    }
    
    return duplicate;
}

int main()
{
    int n = 0;
    cin >> n;
    
    int* arr = new int[n];
    
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    
    cout << findDuplicate(arr, n);
    return 0;
}
