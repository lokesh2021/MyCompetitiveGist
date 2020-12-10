#include <iostream>
using namespace std;

// A linked list node
class Node
{
public:
    int data;
    Node *next;
};

//head_ref is the initial pointer which is of type pointer
void push(Node **head_ref, int new_data)
{
    Node *new_node = new Node(); //allocating a new empty node
    new_node->data = new_data;   //put the data in empty node;
    new_node->next = *head_ref;  //make the next of new node as head
    *head_ref = new_node;        //move the head to point to the new node
}

void insert_after(Node *prev_node, int new_data)
{
    if (prev_node == NULL)
    {
        cout << "given previous node is null";
        return;
    }

    Node *new_node = new Node();
    new_node->data = new_data;
    new_node->next = prev_node->next;
    prev_node->next = new_node;
}

void append(Node **head_ref, int new_data)
{
    Node *new_node = new Node();
    Node *last = *head_ref;
    new_node->data = new_data;
    new_node->next = NULL;
    if (*head_ref == NULL)
    {
        *head_ref = new_node;
        return;
    }
    while (last->next != NULL)
        last = last->next;
    last->next = new_node;
    return;
}

void delete_key(Node **head_ref, int key)
{
    Node* temp = *head_ref;
    Node* prev = NULL;
    if(temp!=NULL && temp->data == key)
    {
        *head_ref = temp->next; //changed the head
        delete temp;            //delete the old head
        return;
    }
}

void display(Node *node)
{
    while (node != NULL)
    {
        cout << " " << node->data;
        node = node->next;
    }
}

int main()
{
    Node *head = NULL; //start with empty Linked list
    push(&head, 1);
    push(&head, 2); //now we are inserting 6 into the linked list so now linked list is 2->3->NULL
    push(&head, 3);
    insert_after(head, 4);       //inserting node after the 1st element
    insert_after(head->next, 5); //inserting node after the 1st element
    append(&head, 8);       //adding element at the end of LL -> 3 4 5 2 1 8
    delete_key(&head,4);
    display(head);
    
    return 0;
}