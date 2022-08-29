#include <iostream>
#include <vector>
using namespace std;

vector<int> getPalindromes(int k) {
    vector<int> result;
    
    string str = "";
    for(int i=1; i<10; i++) {
        
        for(int j=0; j<10; j++) {
            str += to_string(i);
            
            for(int x=0; x<k-2; x++) {
                str += to_string(j);
            }
        
            str += to_string(i);
            
            result.push_back(stoi(str));
            str = "";
        }
    }
    
    return result;
}

int main()
{

    int k = 0;
    cin >> k;
    
    int n = 0;
    vector<int> queries;
    while(cin >> n && n!=-1) { // -1 to stop reading
        queries.emplace_back(n);
    }
    
    vector<int> result = getPalindromes(k);
    for(int i=0; i<queries.size(); i++) {
        cout << result[queries[i]-1] << " ";
    }
    
    return 0;
}
