#include <iostream>
using namespace std;

struct Node{
    int data;
    struct Node* next;
    
    Node(int data){
        this -> data = data;
    }
}*head = NULL, *tail = NULL;

void insertNodeAtEnd(){
    int data = 0;
    cin >> data;
    
    Node* node = new Node(data);
    
    if(head == NULL){
        head = node;
        tail = node;
    }else{
        tail -> next = node;
        tail = node;
    }
}

void insertNodeAtStart(){
    int data = 0;
    cin >> data;
    
    Node* node = new Node(data);
    
    if(head == NULL){
        head = node;
        tail = node;
    }else{
        node -> next = head;
        head = node;
    }
}

void printLinkedList(Node* head){
    if(head == NULL){
        cout << "NULL";
        return;
    }
    
    Node* temp = head;
    
    while(temp -> next != NULL){
        cout << temp -> data << " ";
        temp = temp -> next;
    }
    
    cout << temp -> data << endl;
}

void printLinkedListReverse(Node* node){
    if(node -> next == NULL){
        cout << node -> data << " ";
        return;
    }
    
    printLinkedListReverse(node -> next);
    cout << node -> data << " ";
}

int main()
{
    int n = 0;
    cin >> n;
    
    for(int i=0; i<n; i++){
        insertNodeAtEnd();
    }
    
    printLinkedList(head);
    printLinkedListReverse(head);

    return 0;
}
