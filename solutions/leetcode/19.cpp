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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode * prev = NULL, * a = head, * b = head;
        while (n--) b = b->next;
        while (b) {
            prev = a;
            a = a->next;
            b = b->next;
        }
        if (a == head) return a->next;
        if (!prev) return NULL;
        prev->next = a->next;
        return head;
    }
};

