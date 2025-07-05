/* Link list node */
/*
struct Node
{
    int data;
    Node* next;
    Node(int x) {  data = x;  next = NULL; }
}; */

class Solution {
  public:
    // Function to count nodes of a linked list.
    bool searchKey(int n, Node* head, int key) {
        // Code here
        Node* t=head;
        while (t!=nullptr){
            if (t->data == key){
                return 1;
            }
            t=t->next;
        }
        return 0;
    }
};
