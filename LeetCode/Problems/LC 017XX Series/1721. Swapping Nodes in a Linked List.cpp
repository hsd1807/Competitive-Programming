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
    ListNode* swapNodes(ListNode* head, int k) {
        ios::sync_with_stdio(false);
        ListNode* temp = head;
        int count = 0;
        while (temp) {
            count++;
            temp = temp->next;
        }
        count -= k--;
        ListNode *Node1 = head, *Node2 =head;
        while (k--) {
            Node1 = Node1->next;
        }
        while (count--) {
            Node2 = Node2->next;
        }
        swap(Node1->val, Node2->val);
        return head; 
    }
};
