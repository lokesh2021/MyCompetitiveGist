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

void insert_after(Node* prev_node,int new_data)
{
    if(prev_node == NULL)
    {
        cout<<"given previous node is null";
        return;
    }

    Node* new_node = new Node();
    new_node->data = new_data;
    new_node->next = prev_node->next;
    prev_node->next = new_node;

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
    push(&head,1);
    push(&head,2);      //now we are inserting 6 into the linked list so now linked list is 2->3->NULL    
    push(&head,3);
    insert_after(head,4); //inserting node after the 1st element
    insert_after(head->next,5); //inserting node after the 1st element
    display(head);
    return 0;
}