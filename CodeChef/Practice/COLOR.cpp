//  https://www.codechef.com/problems/COLOR

#include <iostream>
using namespace std;

struct Colors{
    const char RED = 'R';
    const char GREEN = 'G';
    const char BLUE = 'B';
}colorsForRoom;

int getColorCount(string colors, char color){
    int colorCount = 0;
    
    for(int i=0; i<colors.length(); i++){
        if(colors[i] == color){
            colorCount++;
        }
    }
    
    return colorCount;
}

int getMax(int A, int B){
    if(A > B){
        return A;
    }
    
    return B;
}

int main() {
    
    int T = 0;
    cin>>T;
    
    if(1<=T && T<=10){
        int numberOfRooms = 0;
        
        while(T--){
            cin>>numberOfRooms;
            string colors = "";
            
            if(1<=numberOfRooms && numberOfRooms<=100000){
                cin>>colors;
                
                int roomRed = getColorCount(colors, colorsForRoom.RED);
                int roomGreen = getColorCount(colors, colorsForRoom.GREEN);
                int roomBlue = getColorCount(colors, colorsForRoom.BLUE);
                
                int colorsCount = colors.length();
                
                cout<<colorsCount - getMax(roomRed, getMax(roomGreen, roomBlue));
                cout<<endl;
            }
            
        }
    }
    
	return 0;
}
