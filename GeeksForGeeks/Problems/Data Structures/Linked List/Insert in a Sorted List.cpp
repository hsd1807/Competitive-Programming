/*
structure of the node of the list is as
struct Node
{
    int data;
    struct Node* next;

    Node(int x){
        data = x;
        next = NULL;
    }
};
*/

class Solution{
  public:
    // Should return head of the modified linked list
    Node *sortedInsert(struct Node* head, int data) {
        Node* tail = head;
        while (tail->next && tail->data < data) {
            tail = tail->next;
        }
        if (!tail->next && data > tail->data) {
            tail->next = new Node(data);
        }
        else {
            Node* temp = new Node(tail->data);
            temp->next = tail->next;
            tail->data = data;
            tail->next = temp;
        }
        return head;
    }
};
