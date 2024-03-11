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
    ListNode* insertGreatestCommonDivisors(ListNode* head) {
        ListNode* temp = head;
        while (temp->next) {
            ListNode* gcd = new ListNode(__gcd(temp->val, temp->next->val));
            gcd->next = temp->next;
            temp->next = gcd;
            temp = temp->next->next;
        }
        return head;
    }
};
