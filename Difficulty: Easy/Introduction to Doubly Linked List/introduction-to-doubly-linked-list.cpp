// User function Template for C++

/*
class Node{
public:
    Node* prev;
    int data;
    Node* next;

    Node()
    {
        prev = NULL;
        data = 0;
        next = NULL;
    }

    Node(int value)
    {
        prev = NULL;
        data = value;
        next = NULL;
    }
};*/

class Solution {
  public:
    Node* constructDLL(vector<int>& arr) {
        // code here
        int n=arr.size();
        if (n==0) return NULL;
        Node* head=new Node(arr[0]);
        Node* prev=head;
        for (int i=1;i<n;i++){
            Node* newNode= new Node(arr[i]);
            prev->next=newNode;
            newNode->prev=prev;
            prev=newNode;
        }
        return head;
    }
};