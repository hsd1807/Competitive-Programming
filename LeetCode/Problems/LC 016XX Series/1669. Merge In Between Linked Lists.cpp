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
    ListNode* mergeInBetween(ListNode* list1, int a, int b, ListNode* list2) {
        ios::sync_with_stdio(false);
        ListNode *tail2 = list2;
        while (tail2->next) {
            tail2 = tail2->next;
        }
        ListNode *curr = list1, *prev = NULL;
        b -= a;
        while (a--) {
            prev = curr;
            curr = curr->next;
        }
        prev->next = list2;
        while (b--) {
            curr = curr->next;
        }
        tail2->next = curr->next;
        return list1;   
    }
};
