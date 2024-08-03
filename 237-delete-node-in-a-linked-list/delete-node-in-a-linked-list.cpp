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
        
       ListNode* nextNode = node->next;
        node->val = nextNode->val;
        // Update the next pointer of the current node to skip the next node
        node->next = nextNode->next;
        // Delete the next node
        delete nextNode;
    }
};

