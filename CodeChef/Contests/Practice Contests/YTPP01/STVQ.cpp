//  https://www.codechef.com/YTPP001/problems/STVQ

#include <iostream>
#include <stack>
using namespace std;

struct QueryTypes{
    const int PUSH  = 1;
    const int POP   = 2;
    const int PRINT = 3;
};

int main() {
	int Q = 0;
	cin >> Q;
	
	if(1<=Q && Q<=2000){
	    int queryNumber = 0;
	    QueryTypes queryTypes;
	    stack<int> stackOfNumers;
	    int pushItem = 0;
	    
	    while(Q--){
	        cin >> queryNumber;
    	    
    	    if(queryNumber == queryTypes.PUSH){
    	        cin >> pushItem;
    	        stackOfNumers.push(pushItem);
    	    }else
    	    
    	    if(queryNumber == queryTypes.POP){
    	        if(!stackOfNumers.empty()){
    	            stackOfNumers.pop();
    	        }
    	    }else
    	    
    	    if(queryNumber == queryTypes.PRINT){
    	        cout << stackOfNumers.top();
    	        cout << endl;
    	    }
    	    
	    }
	}
	
	return 0;
}
