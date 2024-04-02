/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/

class Solution {
public:
    Node* copyRandomList(Node* head) {
        ios::sync_with_stdio(false);
        cin.tie(0);
        if (!head) {
            return NULL;
        }
        Node *headCopy = new Node(0);
        Node *tailCopy = headCopy;
        Node *temp = head;
        while (temp) {
            tailCopy->next = new Node(temp->val);
            tailCopy = tailCopy->next;
            temp = temp->next;
        }
        tailCopy = headCopy;
        headCopy = headCopy->next;
        delete tailCopy;
        Node *curr1 = head, *curr2 = headCopy, *front1, *front2;
        while (curr1) {
            front1 = curr1->next;
            front2 = curr2->next;
            curr1->next = curr2;
            curr2->next = front1;
            curr1 = front1;
            curr2 = front2;
        }
        curr1 = head;
        while (curr1) {
            curr2 = curr1->next;
            if (curr1->random) {
                curr2->random = curr1->random->next;
            }
            curr1 = curr2->next;
        } 
        curr1 = head;
        while (curr1->next) {
            front1 = curr1->next;
            curr1->next = front1->next;
            curr1 = front1;
        }
        return headCopy;
    }
};
