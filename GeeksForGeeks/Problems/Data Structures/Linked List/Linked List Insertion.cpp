/*Structure of the linked list node is as
struct Node {
  int data;
  struct Node * next;
  Node(int x) {
    data = x;
    next = NULL;
  }
}; */
class Solution{
  public:
    //Function to insert a node at the beginning of the linked list.
    Node *insertAtBegining(Node *head, int x) {
        if (head == NULL) {
            head = new Node(x);
        }
        else {
        Node* temp = new Node(x);
        temp->next = head;
        head = temp;
        }
        return head;
    }
    //Function to insert a node at the end of the linked list.
    Node *insertAtEnd(Node *head, int x)  {
        if (head == NULL) {
            head = new Node(x);
        }
        else {
        Node* tail = head;
        while (tail->next) {
            tail = tail->next;
        }
        tail->next = new Node(x);
        }
        return head;
    }
};
