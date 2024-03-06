/*
  Print elements of a linked list on console 
  head pointer input could be NULL as well for empty list
  Node is defined as 
  struct Node
  {
     int data;
     Node *next;
  }
*/
class Solution
{
    public:
    void display(Node *head)
    {
      while(head) {
          cout << head->data << " ";
          head = head->next;
      }
    }
};
