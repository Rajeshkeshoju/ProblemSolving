//  

// Iterative solution TC: O(N), SC:O(1)
  struct Node* reverseList(struct Node *head)
  {
      Node* prev = NULL;
      Node* curr = head;

      Node* temp = NULL;
      while(curr != NULL) {
          temp = curr -> next;
          curr -> next = prev;

          prev = curr;
          curr = temp;
      }

      return prev;
  }

// Recursive solution TC: O(N), SC: O(1)
struct Node* reverse(struct Node *node, Node*& head) {
    if(node == NULL) {
        return node;
    }

    if(node -> next == NULL) {
        head = node;
        return node;
    }

    Node* temp = reverse(node -> next, head);
    temp -> next = node;
    node -> next = NULL;

    return node;
}

struct Node* reverseList(struct Node* head) {
    Node* tail = reverse(head, head);
    return head;
}
