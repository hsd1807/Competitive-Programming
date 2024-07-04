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
    ListNode* mergeNodes(ListNode* head) {
        ios::sync_with_stdio(false);
        cin.tie(0);
        ListNode *temp = head->next, *prev = head;
        int sum = 0;
        while (temp) {
            if (temp->val) {
                sum += temp->val;
            }
            else {
                prev->next = temp;
                prev = temp;
                temp->val = sum;
                sum = 0;
            }
            temp = temp->next;
        }
        return head->next;
    }
};
