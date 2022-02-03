#include <iostream>
#include <set>
#include <unordered_map>
using namespace std;

bool isUniqueString(string str = "") {
    int n = str.size();
    
    /*
        //  bruteforce approach O(N^2)
        for(int i=0; i<n; i++) {
            for(int j=i+1; j<n; j++) {
                if(str[i] == str[j]) {
                    return false;
                }
            }
        }
    */
    
    
    /*
        // optimized approach   O(NlogN + N)
        sort(str.begin(). str.end());
        for(int i=0; i<n-1; i++) {
            if(str[i] == str[i+1]) {
                return false;
            }
        }
    */
    
    
    /*
        // STL hashMap approach  O(N)
        unordered_map<char, int> mp;
        for(auto it : str) {
            mp[it]++;
            
            if(mp[it] > 1) {
                return false;
            }
        }  
    */
    
    //  STL set approach  O(N)
    set<int> strSet;
    for(auto it : str) {
        strSet.insert(it);
    }
    
    return strSet.size() == str.size();
    
    return true;
}

int main()
{
    string str = "";
    getline(cin, str);
    
    if(isUniqueString(str)) {
        cout << "String contains unique characters\n";
    }else {
        cout << "String does not contain unique characters\n";
    }

    return 0;
}
