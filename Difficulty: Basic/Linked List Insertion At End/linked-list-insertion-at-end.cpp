/*Structure of the linked list node is as
struct Node {
  int data;
  struct Node * next;
  Node(int x) {
    data = x;
    next = NULL;
  }
}; */

class Solution {
  public:
    Node *insertAtEnd(Node *head, int x) {
        // Code here
        Node* t=new Node(x);
        if (head==NULL){
            return t;
            
        }
        Node* temp=head;
        while (temp->next!=NULL){
            temp=temp->next;
            
        }
        temp->next=t;
        return head;
    }
};