//  https://leetcode.com/problems/next-greater-node-in-linked-list/
//  https://leetcode.com/submissions/detail/664426100/

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
    vector<int> nextLargerNodes(ListNode* head) {
        ListNode* t1 = head;
        ListNode* t2 = head;
        
        vector<int> nextLargerNodes;
        
        while(t1) {
            t2 = t1 -> next;
            
            bool isFound = false;
            
            while(t2) {
                if(t1 -> val < t2 -> val) {
                    isFound = true;
                    nextLargerNodes.push_back(t2 -> val);
                    break;
                }
                
                t2 = t2 -> next;
            }                            
            
            if(!isFound) {
                nextLargerNodes.push_back(0);
            }
            
            t1 = t1 -> next;
        }
        
        return nextLargerNodes;
    }
};
