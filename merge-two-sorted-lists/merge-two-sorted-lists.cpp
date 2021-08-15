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
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        ListNode *node = new ListNode(0);
        ListNode *head = node;
        
        while (l1 != nullptr && l2 != nullptr) {
            if (l1->val <= l2->val) {
                ListNode *temp = l1;
                l1 = l1->next;
                temp->next = nullptr;
                node->next = temp;
                node = temp;
            } else {
                ListNode *temp = l2;
                l2 = l2->next;
                temp->next = nullptr;
                node->next = temp;
                node = temp;
            }
        }
        
        if (l1 != nullptr)
            node->next = l1;
        else if (l2 != nullptr)
            node->next = l2;
        
        return head->next;
    }
};