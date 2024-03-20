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
    int pairSum(ListNode* head) {
        ios::sync_with_stdio(false);
        ListNode *slow = head, *fast = head, *prev = NULL;
        while (fast) {
            prev = slow;
            slow = slow->next;
            fast = fast->next->next;
        }
        prev->next = NULL;
        prev = NULL;
        while (slow) {
            fast = slow->next;
            slow->next = prev;
            prev = slow;
            slow = fast;
        }
        ListNode *Head = prev;
        int sum = 0;
        while (head) {
            sum = max(sum, head->val + Head->val);
            head = head->next;
            Head = Head->next;
        }
        return sum;
    }
};
