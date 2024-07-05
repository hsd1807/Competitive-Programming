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
    vector<int> nodesBetweenCriticalPoints(ListNode* head) {
        ios::sync_with_stdio(false);
        int start = 0, cnt = 1, pre = 0, mn = INT_MAX, mx = INT_MIN;
        ListNode *curr = head->next, *prev = head;
        while (curr->next) {
            cnt++;
            if ((prev->val < curr->val && curr->next->val < curr->val) || (prev->val > curr->val && curr->next->val > curr->val)) {
                if (!start) {
                    start = cnt;
                    pre = cnt;
                }
                else {
                    mn = min(mn, cnt - pre);
                    pre = cnt;
                }
            }
            prev = curr;
            curr = curr->next;
        }
        cnt++;
        vector<int> ans;
        if (cnt < 4 || mn == INT_MAX) {
            ans = {-1, -1};
        }
        else {
            ans = {mn, pre - start};
        }
        return ans;   
    }
};
