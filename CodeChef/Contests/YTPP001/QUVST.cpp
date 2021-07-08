//  https://www.codechef.com/YTPP001/problems/QUVST

#include <iostream>
#include <queue>
using namespace std;

struct QueryTypes{
    const int ENQUEUE  = 1;
    const int DEQUEUE   = 2;
    const int PRINT = 3;
};

int main() {
	int Q = 0;
	cin >> Q;
	
	if(1<=Q && Q<=2000){
	    int queryNumber = 0;
	    QueryTypes queryTypes;
	    queue<int> queueOfNumbers;
	    int pushItem = 0;
	    
	    while(Q--){
	        cin >> queryNumber;
    	    
    	    if(queryNumber == queryTypes.ENQUEUE){
    	        cin >> pushItem;
    	        queueOfNumbers.push(pushItem);
    	    }else
    	    
    	    if(queryNumber == queryTypes.DEQUEUE){
    	        if(!queueOfNumbers.empty()){
    	            queueOfNumbers.pop();
    	        }
    	    }else
    	    
    	    if(queryNumber == queryTypes.PRINT){
    	        cout << queueOfNumbers.front();
    	        cout << endl;
    	    }
    	    
	    }
	}
	return 0;
}
