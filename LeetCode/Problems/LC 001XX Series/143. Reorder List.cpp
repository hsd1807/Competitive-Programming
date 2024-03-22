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
    void reorderList(ListNode* head) {
        ios::sync_with_stdio(false);
        if (head->next) {
        ListNode * fast = head, * slow = head, *prev = NULL;
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
        ListNode * head1 = head, * head2 = prev;
        int index = 1;
        head = new ListNode(0);
        ListNode * tail = head;
        while (head1 && head2) {
            if (index++ % 2) {
                tail->next = head1;
                head1 = head1->next;
                tail = tail->next;
                tail->next = NULL;
            }
            else {
                tail->next = head2;
                head2 = head2->next;
                tail = tail->next;
                tail->next = NULL;
            }
        }
        if (head1) {
            tail->next = head1;
        }
        else {
            tail->next = head2;
        }
        head = head->next;
        }
    }
};
