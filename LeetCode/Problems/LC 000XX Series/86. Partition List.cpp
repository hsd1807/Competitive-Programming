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
    ListNode* partition(ListNode* head, int x) {
        ListNode* prev = new ListNode(0);
        prev->next = head;
        ListNode* tail = head;
        head = prev;
        ListNode* Head = new ListNode(201);
        ListNode* Tail = Head;
        while(tail) {
            if (tail->val < x) {
                prev->next = tail->next;
                Tail->next = tail;
                tail = tail->next;
                Tail = Tail->next;
                Tail->next = NULL;
            }
            else {
                prev = tail;
                tail = tail->next;
            }
        }
        Tail->next = head->next;
        return Head->next; 
    }
};
