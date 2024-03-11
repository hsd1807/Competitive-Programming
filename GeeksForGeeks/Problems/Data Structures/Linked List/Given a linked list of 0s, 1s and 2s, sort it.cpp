/*
 
  Node is defined as
  struct Node {
    int data;
    struct Node *next;
    Node(int x) {
        data = x;
        next = NULL;
    }
};

*/
class Solution
{
    public:
    //Function to sort a linked list of 0s, 1s and 2s.
    Node* segregate(Node *head)
  {
        vector<int> cnt(3,0);
        Node* temp = head;
        while (temp) {
            cnt[temp->data]++;
            temp = temp->next;
        }
        temp = head;
        for (int i = 0; i < 3; i++) {
            while (cnt[i]) {
                temp->data = i;
                temp = temp->next;
                cnt[i]--;
            }
        }
        return head;
    }
};
