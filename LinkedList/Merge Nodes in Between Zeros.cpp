//  https://leetcode.com/problems/merge-nodes-in-between-zeros/
//  https://leetcode.com/submissions/detail/662796498/

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
    ListNode* mergeNodes(ListNode* head) {
        ListNode* temp = head;
        temp = temp -> next;
        
        while(temp != NULL) {
                
            ListNode* t = temp -> next;
            while(t -> val != 0) {
                temp -> val += t -> val;
                t = t -> next;
            }

            temp -> next = t -> next;
            temp = temp -> next;
        }
        
        return head -> next;
    }
};
