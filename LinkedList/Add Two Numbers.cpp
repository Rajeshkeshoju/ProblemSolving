//  https://leetcode.com/problems/add-two-numbers/
//  https://leetcode.com/submissions/detail/684111752/

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    
    void addLists(ListNode* l1, ListNode* l2, ListNode* tail, int sum = 0, int carry = 0) {
        if(!l1) {
            while(l2) {
                sum = (l2 -> val + carry) % 10;
                carry = (l2 -> val + carry) / 10;
                
                tail  -> next = new ListNode(sum);
                l2 = l2 -> next;
                tail = tail -> next;
            }
            
            if(carry) {
                tail -> next = new ListNode(carry);
            }
            
            return;
            
        }else if(!l2) {
            while(l1) {
                sum = (l1 -> val + carry) % 10;
                carry = (l1 -> val + carry) / 10;
                
                tail  -> next = new ListNode(sum);
                l1 = l1 -> next;
                tail = tail -> next;
            }
            
            if(carry) {
                tail -> next = new ListNode(carry);
            }
            
            return;
        }
        
        sum = (l1 -> val + l2 -> val + carry) % 10;
        carry = (l1 -> val + l2 -> val + carry) / 10;
        
        tail -> next = new ListNode(sum);
        tail = tail -> next;
        
        addLists(l1 -> next, l2 -> next, tail, sum, carry);
        
    }
    
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* sumList = new ListNode();
        ListNode* tail = sumList;
        
        addLists(l1, l2, tail);
        
        return sumList -> next;
    }
};
