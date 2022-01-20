#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

// N + NlogN running time
vector<int> getSumIndices(vector<int> arr, int target) {
    unordered_map<int, int> mp;
    vector<int> sumIndices(2, -1);
    
    // N running time
    for(int i=0; i<arr.size(); i++) {
        mp[arr[i]] = i;
    }
    
    // N * logN running time
    for(int i=0; i<arr.size(); i++) {
        int second = target - arr[i];
        
        auto it = mp.find(second);
        if(it != mp.end() && i != it -> second) {
            sumIndices[0] = i;
            sumIndices[1] = it -> second;
            return sumIndices;
        }
    }
    
    return sumIndices;
}

int main()
{
    int n = 0;
    cin >> n;
    
    vector<int> arr(n);
    for(auto &it : arr) {
        cin >> it;
    }
    
    int target = 0;
    cin >> target;
    
    vector<int> sumIndices = getSumIndices(arr, target);
    for(auto it : sumIndices){
        cout << it << " ";
    }

    return 0;
}
