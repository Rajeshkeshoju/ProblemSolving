//  https://leetcode.com/problems/intersection-of-two-linked-lists/  
//  https://leetcode.com/submissions/detail/662769883/
//  https://leetcode.com/submissions/detail/662775445/

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
 
// Using TWO POINTER technique O(M + N)
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode* t1 = headA;
        ListNode* t2 = headB;
        
        while(t1 != t2) {
            
            if(t1 == NULL) {
                t1 = headB;
            }else {
                t1 = t1 -> next;
            }
            
            
            if(t2 == NULL) {
                t2 = headA;
            }else {
                t2 = t2 -> next;
            }
            
        }
        
        return t1;
    }
};


 
// Using MAP DS O(N Log N)
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        unordered_map<ListNode*, int> mp;
        
        while(headA != NULL) {
            mp[headA]++;
            headA = headA -> next;
        }
        
        while(headB != NULL) {
            auto it = mp.find(headB);
            
            if(it != mp.end() && it -> first == headB) {
                return it -> first;
            }
            
            headB = headB -> next;
        }
        
        return NULL;
    }
};
