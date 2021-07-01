//  https://www.codechef.com/problems/CYCLICQD

#include <iostream>
using namespace std;

struct Quadrilater{
    int A;
    int B;
    int C;
    int D;
}quadrilater;

int isCyclicQuadrilateral(Quadrilater quadrilater){
    return (quadrilater.A + quadrilater.C == 180) && (quadrilater.B + quadrilater.D == 180);
}

int main() {
	
	int T = 0;
	cin>>T;
	
	if(1<=T && T<=10000){
        
        while(T--){
            cin >> quadrilater.A;
            cin >> quadrilater.B;
            cin >> quadrilater.C;
            cin >> quadrilater.D;
            
            int constraintA = 1<=quadrilater.A && quadrilater.A<=357;
            int constraintB = 1<=quadrilater.B && quadrilater.B<=357;
            int constraintC = 1<=quadrilater.C && quadrilater.C<=357;
            int constraintD = 1<=quadrilater.D && quadrilater.D<=357;
            int constraintTotalAngle = (quadrilater.A+quadrilater.B+quadrilater.C+quadrilater.D == 360);
            
            if(constraintA && constraintB 
            && constraintC && constraintD
            && constraintTotalAngle){
                
                if(isCyclicQuadrilateral(quadrilater)){
                    cout << "YES";
                }else {
                    cout << "NO";
                }cout << endl;
            }
        }
	}
}
