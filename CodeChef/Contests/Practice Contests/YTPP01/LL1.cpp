//  https://www.codechef.com/YTPP001/problems/LL1

struct Node {
	int data;
	struct Node* next;
	Node(int x){
		data = x;
		next = NULL;
	}
};

int getNthNodeFromEnd(struct Node* head, int n){
    int totalCount = 1;
    Node* temp = head;
    
    while(temp -> next != NULL){
        temp = temp -> next;
        totalCount++;
    }
    
    for(int i=0; i<(totalCount-n); i++){
        if(head -> next != NULL){
            head = head -> next;
        }else{
            break;
        }
    }
    
    return head ->  data;
}
