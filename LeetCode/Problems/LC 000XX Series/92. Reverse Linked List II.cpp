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
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        if (left != right) {
            ListNode* temp = new ListNode(0);
            temp->next = head;
            head = temp;
            ListNode* curr = head, *prev = NULL;
            right -= left;
            right++;
            while (left--) {
                prev = curr;
                curr = curr->next;
            }
            ListNode *first = prev, *second = curr, *front;
            while (right--) {
                front = curr->next;
                curr->next = prev;
                prev = curr;
                curr = front;
            }
            first->next = prev;
            second->next = curr;
            head = head->next;
        }
        return head;
    }
};
