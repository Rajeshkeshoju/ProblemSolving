#include <iostream>
#include <vector>
using namespace std;

vector<string> generateCode(vector<string> grayCodes, string code, int n) {
    if(code.size() == n) {
        grayCodes.push_back(code);
        return grayCodes;
    }
    
    grayCodes = generateCode(grayCodes, code + '0', n);
    grayCodes = generateCode(grayCodes, code + '1', n);
    
    return grayCodes;
}

vector<string> graycode(int n) {
    vector<string> grayCodes;
    
    grayCodes = generateCode(grayCodes, "", n);
    return grayCodes;
}

int main() {
    int n = 0;
    cin >> n;
    
    vector<string> grayCodes = graycode(n);
    for(auto it : grayCodes){
        cout << it << "\n";
    }

    return 0;
}
