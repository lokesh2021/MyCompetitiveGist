#include <iostream>
using namespace std;

// A linked list node
class Node
{
public:
    int data;
    Node *next;
};

void push(Node **head_ref, int new_data)
{
    Node *new_node = new Node(); //allocating a new empty node
    new_node->data = new_data;   //put the data in empty node;
    new_node->next = *head_ref;  //make the next of new node as head
    *head_ref = new_node;        //move the head to point to the new node
}

//recursive reversing of LL
Node *recReverse(Node *head)
{
    if (head == NULL || head->next == NULL)
    {
        return head;
    }
    Node *chotaHead = recReverse(head->next);

    head->next->next = head;
    head->next = NULL;
    return chotaHead;
}

//iterative method of reversing a LL
void reverse_ll(Node **head_ref)
{
    Node *curr = *head_ref;
    Node *prev = NULL, *next = NULL;
    while (curr != NULL)
    {
        next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
    }
    *head_ref = prev;
}

void display(Node *node)
{
    while (node != NULL)
    {
        cout << node->data << " ";
        node = node->next;
    }
    cout << endl;
}

int main()
{
    Node *head = NULL; //start with empty Linked list
    push(&head, 1);
    push(&head, 2);
    push(&head, 3);
    push(&head, 4);
    push(&head, 5); //now we are inserting 6 into the linked list so now linked list is 2->3->NULL
    cout << "Before reversing LL" << endl;
    display(head);
    reverse_ll(&head);
    cout << "After reversing LL" << endl;
    display(head);
    cout << "After reversing LL in recursion" << endl;
    head = recReverse(head);
    display(head);
    return 0;
}