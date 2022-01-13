#include <iostream>
#include <vector>
#include <unistd.h>
using namespace std;

void printList(vector<int>& list){
    cout << "[";
    
    int n = list.size();
    
    if(n > 0){
        for(int i=0; i<n-1; i++){
            cout << list[i] << ",";
        }
        
        cout << list[n-1];
    }
    
    cout << "]\n";
}

void printPowerSet(int* nums, vector<int>& set, int n, int i=0){
    if(i >= n){
        sleep(1);
        printList(set);
        return;
    }
    
    // NOT picking or NOT including
    printPowerSet(nums, set, n, i+1);
    
    // Picking or Including
    set.push_back(nums[i]);
    printPowerSet(nums, set, n, i+1);
    
    //Discarding latest value for next recusrion
    set.pop_back();
}

int main() {
    int n = 0;
    cin >> n;
    
    int* nums = new int[n];
    for(int i=0; i<n; i++){
        cin >> nums[i];
    }

    vector<int> set;
    
    cout << "Printing power set..." << endl;
    printPowerSet(nums, set, n);
    
    return 0;
}
