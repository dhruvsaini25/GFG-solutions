/* a Node of the doubly linked list
struct Node
{
  int data;
  struct Node *next;
  struct Node *prev;
  Node(int x) { data = x; next = prev = NULL; }
}; */

// Function to insert a new node at given position in doubly linked list.
class Solution {
  public:
    // Function to insert a new node at given position in doubly linked list.
    Node *addNode(Node *head, int pos, int data) {
        // code here
        Node* newNode= new Node(data);
        Node* current=head;
        for (int i=0;i<pos && current!=nullptr; i++){
            current=current->next;
        }
        newNode->next=current->next;
        newNode->prev=current;
        if (current->next != nullptr){
            current->next->prev=newNode;
        }
        current->next=newNode;
        return head;
    }
};