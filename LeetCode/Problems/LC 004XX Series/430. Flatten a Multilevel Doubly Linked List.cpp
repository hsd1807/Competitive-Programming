/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* prev;
    Node* next;
    Node* child;
};
*/

class Solution {
public:
    Node* flatten(Node* head) {
        Node *curr = head;
        while (curr) {
            if (curr->child) {
                Node *tail = curr->child;
                while (tail->next) {
                    tail = tail->next;
                }
                tail->next = curr->next;
                if (tail->next) tail->next->prev = tail;
                curr->next = curr->child;
                curr->child->prev = curr;
                curr->child = NULL;
            }
            curr = curr->next;
        }
        return head;  
    }
};
