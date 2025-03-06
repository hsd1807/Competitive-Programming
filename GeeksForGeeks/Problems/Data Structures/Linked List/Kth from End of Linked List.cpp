
/* struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
};*/

// Function to find the data of kth node from the end of a linked list.
class Solution {
  public:
    int getKthFromLast(Node *head, int k) {
        // Your code here
        int n = 0;
        Node *curr = head;
        while (curr) {
            n++;
            curr = curr->next;
        }
        if (k > n) return -1;
        n -= k;
        curr = head;
        while (n--) {
           curr = curr->next; 
        }
        return curr->data;
    }
};
