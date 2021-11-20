#include <iostream>
using namespace std;

void printBoat(char character, int depth = 0){
    for(int i=0; i<depth; i++){
        for(int k=0; k<depth; k++){
            cout << " ";
        }
        
        for(int j=0; j<=i; j++){
            cout << character << " ";
        }
        
        cout << "\n";
    }
    
    int charCount = 2 * depth;
    for(int i=0; i<depth; i++){
        for(int k=0; k<i; k++){
            cout << " ";
        }
        
        for(int j=0; j<charCount; j++){
            cout << character << " ";
        }
        
        cout << "\n";
        charCount--;
    }
}

int main()
{
    char CHARACTER;
    int depth = 0;
    
    cin >> CHARACTER;
    cin >> depth;
    
    cout << endl;
    printBoat(CHARACTER, depth);

    return 0;
}
