//  https://leetcode.com/problems/swapping-nodes-in-a-linked-list/
//  https://leetcode.com/submissions/detail/662802131/

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
    ListNode* swapNodes(ListNode* head, int k) {
        int n = 0;
        ListNode* temp = head;
        ListNode* t1 = head;
        
        while(temp != NULL) {
            n++;
            
            if(n == k) {
                t1 = temp;
            }
            
            temp = temp -> next;
        }
        
        ListNode* t2 = head;
        int x = n-k;
        
        while(x--) {
            t2 = t2 -> next;
        }
        
        int p = t1 -> val;
        t1 -> val = t2 -> val;
        t2 -> val = p;
        
        return head;
    }
};
