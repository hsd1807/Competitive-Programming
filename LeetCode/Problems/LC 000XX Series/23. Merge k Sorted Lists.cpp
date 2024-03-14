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
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        vector<int> values;
        for (int i = 0; i < lists.size(); i++) {
            ListNode* temp = lists[i];
            while (temp) {
                values.push_back(temp->val);
                temp = temp->next;
            }
        }
        sort(values.begin(), values.end());
        ListNode* head = NULL, *tail = NULL;
        if (values.size()) {
        for (int i = 0; i < values.size(); i++) {
            if (head == NULL) {
                head = new ListNode(values[i]);
                tail = head;
            }
            else {
                tail->next = new ListNode(values[i]);
                tail = tail->next;
            }
        }
        }
        return head;
    }
};
