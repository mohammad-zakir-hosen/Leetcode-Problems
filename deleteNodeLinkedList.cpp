237. Delete Node in a Linked List
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
        printf("%d\n", node->next->val);
        printf("%d\n", node->val);
        node->val = node->next->val;
        
        node->next = node->next->next;
    }
};
