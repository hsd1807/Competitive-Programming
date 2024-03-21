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
    bool isPalindrome(ListNode* head) {
        ios::sync_with_stdio(false);
        if (head->next == NULL) return 1;
        ListNode *slow = head, *prev = NULL, *fast = head;
        while (fast && fast->next) {
            prev = slow;
            slow = slow->next;
            fast = fast->next->next;
        }
        prev->next = NULL;
        ListNode *curr = slow, *front = NULL;
        prev = NULL;
        while (curr) {
            front = curr->next;
            curr->next = prev;
            prev = curr;
            curr = front;
        }
        ListNode *head1 = head, *head2 = prev;
        while (head1) {
            if (head1->val != head2->val)
                return 0;
            head1 = head1->next;
            head2 = head2->next;
        }
        return 1;   
    }
};
