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
    ListNode* reverseKGroup(ListNode* head, int k) {
        int cnt = 0;
        ListNode* curr = head;
        while (curr) {
            cnt++;
            curr = curr->next;
        }
        ListNode *first = new ListNode(0);
        first->next = head;
        head = first;
        ListNode *second, *prev, *front;
        while(first->next && cnt >= k) {
            second = first->next;
            curr = first->next;
            prev = first;
            int x = k;
            cnt -= k;
            while (curr && x--) {
                front = curr->next;
                curr->next = prev;
                prev = curr;
                curr = front;
            }
            first->next = prev;
            second->next = curr;
            first = second;
        }
        return head->next;
    }
};
