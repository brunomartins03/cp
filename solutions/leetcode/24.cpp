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
    ListNode* swapPairs(ListNode* head) {
        if (!head) return NULL;
        ListNode * h1 = head, * h2 = head->next;
        if (!h2) return h1;
        ListNode * p1 = h1, * p2 = h2;
        while (p1 and p2) {
            p1->next = p2->next;
            if (p2->next) p2->next = p2->next->next;

            p1 = p1->next;
            p2 = p2->next;
        }
        p1 = h1;
        p2 = h2;
        while (p1 and p2) {
            ListNode * aux1, * aux2;
            
            aux1 = p1->next;
            aux2 = p2->next;
            p2->next = p1;
            if (aux2) p1->next = aux2;

            p1 = aux1;
            p2 = aux2;
        }
        return h2;
    }
};

