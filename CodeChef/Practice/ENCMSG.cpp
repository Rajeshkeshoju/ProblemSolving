//  https://www.codechef.com/problems/ENCMSG

#include <iostream>
using namespace std;

string alterString(string message, int sizeOfMessage){
    int lastIndex = sizeOfMessage - 1;
    
    if(sizeOfMessage % 2){
        lastIndex = sizeOfMessage - 2;
    }
    
    char temp;
    
    for(int i=0; i<=lastIndex; i += 2){
        temp = message[i];
        message[i] = message[i+1];
        message[i+1] = temp;
    }
    
    return message;
}

string encodeMessage(string message){
    int size = message.size();
    
    for(int character = 0; character<size; character++){
        message[character] = 'z' - (message[character] - 'a');
    }
    
    return message;
}

int main() {
    int T = 0;
    cin>>T;
    
    if(1<=T && T<=1000){
        int sizeOfMessage = 0;
        string message = "";
        
        while(T--){
            cin >> sizeOfMessage;
            cin >> message;
            
            if(1<=sizeOfMessage && sizeOfMessage<=100 && message.size() == sizeOfMessage){
                
                message = alterString(message, sizeOfMessage);
                cout << encodeMessage(message);
                cout << endl;
            }
        }
    }
    
	return 0;
}
