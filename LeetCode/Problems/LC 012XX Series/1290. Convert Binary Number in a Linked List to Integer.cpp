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
    int getDecimalValue(ListNode* head) {
        int decimal = 0;
        int power = 1;
        ListNode *temp = head->next;
        while (temp) {
            temp = temp->next;
            power *= 2;
        }
        temp = head;
        while (temp) {
            decimal += (temp->val)*power;
            temp = temp->next;
            power /= 2;
        }
        return decimal;
    }
};
