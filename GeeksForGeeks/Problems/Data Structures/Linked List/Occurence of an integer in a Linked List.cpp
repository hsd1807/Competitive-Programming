/*
  Node is defined as 
struct node
{
    int data;
    struct node* next;
    
    node(int x){
        data = x;
        next = NULL;
    }
}*head;
*/
class Solution
{
    public:
    int count(struct node* head, int search_for){
        int cnt = 0;
        node* temp = head;
        while (temp) {
            if (temp->data == search_for)
                cnt++;
            temp = temp->next;
        }
        return cnt;
    }
};
