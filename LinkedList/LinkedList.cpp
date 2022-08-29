#include <iostream>
using namespace std;

struct Node {
    int data;
    struct Node* next;
    
    Node(int data = 0) {
        this -> data = data;
        this -> next = nullptr;
    }
};

struct Node* head = nullptr;
struct Node* tail = nullptr;



int detectCycle(Node* head) {
    if(head == nullptr) {
        return 0;
    }
    
    Node* fast = head;
    Node* slow = head;
    
    while(slow and fast and fast -> next) {
        fast = fast -> next -> next;
        slow = slow -> next;
        
        if(slow == fast) {
            return 1;
        }
    }
    
    return 0;
}



int deleteAtKthPosition(Node*& head, int k) {
    if(head == nullptr) {
        return 0;
    }
    
    if(k < 0) {
        return 0;
    }
    
    Node* temp = head;
    while(--k > 1 and temp -> next) {
        temp = temp -> next;
    }
    
    if(temp -> next) {
        temp -> next = temp -> next -> next;
    } else {
        temp -> next = nullptr;
    }
    
    return 1;
}



int removeNthNodeFromBack(Node*& head, int n) {
    if(head == nullptr) {
        return 0;
    }
    
    if(n < 0) {
        return 0;
    }
    
    Node* first = head;
    Node* second = head;
    
    while(n-- > 1) {
        first = first -> next;
    }
    
    int count = 1;
    while(first and first -> next) {
        first = first -> next;
        second = second -> next;
        
        count++;
    }
    
    deleteAtKthPosition(head, count);
    
    return 1;
}



Node* middleNode(Node*& head) {
    if(head == nullptr) {
        return head;
    }
    
    Node* slow = head;
    Node* fast = head;
    
    while(fast and fast -> next) {
        slow = slow -> next;
        fast = fast -> next -> next;
    }
    
    return slow;
}



Node* reverseList(Node*& head) {
    if(head == nullptr) {
        return head;
    }
    
    Node* prev = nullptr;
    Node* curr = head;
    
    while(curr) {
        Node* temp = curr -> next;
        curr -> next = prev;
        
        prev = curr;
        curr = temp;
    }
    
    return prev;
}



int insertAtEnd(Node*& head, Node* node) {
    if(node == nullptr) {
        return 0;
    }
    
    if(head == nullptr) {
        head = node;
        tail = head;
    } else {
         tail -> next = node;
         tail = node;
    }
    
    return 1;
}



int insertAtStart(Node*& head, Node* node) {
    if(node == nullptr) {
        return 0;
    }
    
    if(head == nullptr) {
        head = node;
        tail = node;
    } else {
        node -> next = head;
        head = node;
    }
    
    return 1;
}



int insertAtKthPosition(Node*& head, Node* node, int k) {
    if(node == nullptr) {
        return 0;
    }
    
    if(k < 0) {
        return 0;
    }
    
    Node* temp = head;
    
    while(--k > 1 and temp -> next) {
        temp = temp -> next;
    }
    
    node -> next = temp -> next;
    temp -> next = node;
    
    if(node -> next == nullptr) {
        tail = node;
    }
    
    return 1;
}



int deleteAtStart(Node*& head) {
    if(head == nullptr) {
        return 0;
    }
    
    Node* temp = head;
    head = head -> next;
    
    delete temp;

    return 1;
}

int deleteAtEnd(Node*& head) {
    if(head == nullptr) {
        return 0;
    }
    
    Node* temp = head;
    
    while(temp and temp -> next and temp -> next -> next) {
        temp = temp -> next;
    }
    
    Node* nodeToDelete = temp -> next;
    temp -> next = nullptr;
    
    delete nodeToDelete;
    
    return 1;
}



int deleteNode(Node*& head, Node* node) {
    if(node == nullptr) {
        return 0;
    }
    
    if(node -> next) {
        Node* temp = node -> next;
        temp -> data = temp -> next -> data;
        temp -> next = temp -> next -> next;
        delete temp;
    } else {
        delete node;
    }
    
    return 1;
}



int  getListLength(Node*& head) {
    int length = 0;
    
    Node* temp = head;
    while(temp) {
        temp = temp -> next;
        length++;
    }
    
    return length;
}



void printList(Node*& head) {
    Node* temp = head;
    
    while(temp) {
        cout << temp -> data;
        cout << " -> ";
        
        temp = temp -> next;
    }
    
    cout << "X";
    cout << endl;
}



Node* createNode(int data = 0) {
    return new Node(data);
}



int main() {
    insertAtEnd(head, createNode(1));
    insertAtStart(head, createNode(0));
    insertAtEnd(head, createNode(3));
    insertAtKthPosition(head, createNode(2), 3);
    insertAtKthPosition(head, createNode(4), 5);
    
    cout << "Original list: ";
    printList(head);
    
    // Node* head2 = reverseList(head);
    // cout << "Reversed list: ";
    // printList(head2);
    
    // Node* head = reverseList(head2);
    
    cout << "Middle node: " << middleNode(head) -> data << endl;
    
    
    //removeNthNodeFromBack(head, 2);
    //cout << "After deleting nth node from back: ";
    //printList(head);
    

    // Creating cycle/loop
    tail -> next = head;
    cout << "Cycle/Loop exists: ";
    cout << detectCycle(head);
    
    return 0;
}
