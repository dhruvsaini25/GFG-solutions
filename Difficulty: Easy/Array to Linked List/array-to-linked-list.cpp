// User function Template for C++

/*class Node {
public:
    int data;
    Node* next;

    // Default constructor
    Node()
    {
        data = 0;
        next = NULL;
    }

    // Parameterised Constructor
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};*/

class Solution {
  public:
    Node* constructLL(vector<int>& arr) {
        // code here
        int n=arr.size();
        if (arr.empty()) return nullptr;
        Node*head=new Node(arr[0]);
        Node*current=head;
        for (int i=1;i<n;i++){
            current->next=new Node(arr[i]);
            current=current->next;
        }
        return head;
    }
};