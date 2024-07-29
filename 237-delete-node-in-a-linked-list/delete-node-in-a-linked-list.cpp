/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    void deleteNode(ListNode* node) {
        if (node == nullptr || node->next == nullptr) {
            return ;
        }
         ListNode* nextNode = node->next;
        node->val = nextNode->val;
        
        // Point the current node's next to the next node's next
        node->next = nextNode->next;
        
        // Delete the old next node
        delete nextNode;
    }
};