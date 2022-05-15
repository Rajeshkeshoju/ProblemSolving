//  https://leetcode.com/problems/swap-nodes-in-pairs/
//  https://leetcode.com/submissions/detail/689499094/

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
    ListNode* swapPairsInList(ListNode* node, bool& isSwap, int& length) {
        if(length % 2 && (!node || !node -> next)) {
            isSwap = false;
            return node;
        }
        
        if(!node || !node -> next) {
            isSwap = true;
            return node;
        }
        
        ListNode* temp = swapPairsInList(node -> next, isSwap, length);
        if(isSwap) {
            node -> next = temp -> next;
            temp -> next = node;
            isSwap = false;
            
            return temp;
        }else {
            node -> next = temp;
            isSwap = true;
        }
        
        return node;
    }
    
    ListNode* swapPairs(ListNode* head) {
        
        int length = 0;
        
        ListNode* temp = head;
        while(temp != NULL) {
            length++;
            temp = temp -> next;
        }
        
        bool isSwap  = false;
        return swapPairsInList(head, isSwap, length);
    }
};
