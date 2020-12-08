#include<iostream>
using namespace std;

// A linked list node 
class Node
{
    public:
        int data;
        Node *next;
};

//head_ref is the initial pointer which is of type pointer
void push(Node** head_ref,int new_data)
{
    Node* new_node = new Node();    //allocating a new empty node
    new_node->data = new_data;      //put the data in empty node;
    new_node->next = *head_ref;     //make the next of new node as head
    *head_ref = new_node;           //move the head to point to the new node
}

void display(Node *node)
{
    while(node!=NULL)
    {
        cout<<" "<<node->data;
        node = node->next;
    }
}

int main()
{
    Node* head = NULL;  //start with empty Linked list
    push(&head,2);
    push(&head,4);      //now we are inserting 6 into the linked list so now linked list is 2->3->NULL    
    
    display(head);
    return 0;
}