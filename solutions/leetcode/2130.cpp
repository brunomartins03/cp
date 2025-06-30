**
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
    int pairSum(ListNode* head) {
        ListNode * slow = head, * fast = head;
        int maxsum = 0;
        stack<int> s;
        while (fast && fast->next) {
            s.push(slow->val);
            slow = slow->next;
            fast = fast->next->next;
        }
        while (slow) {
            maxsum = max(maxsum, s.top() + slow->val);
            slow = slow->next;
            s.pop();
        }
        return maxsum;
    }
};

