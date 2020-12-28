#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
};

void removeDuplicates(Node *head)
{
    Node *curr = head;
    Node *next_next; //pointer to store the next pointer of a node to be deleted

    if (curr == NULL)
        return;

    while (curr->next != NULL)
    {
        if (curr->data == curr->next->data)
        {
            next_next = curr->next->next;
            free(curr->next);
            curr->next = next_next;
        }
        else
        {
            curr = curr->next;
        }
    }
}

void push(Node **head, int new_data)
{
    Node *new_node = new Node();
    new_node->data = new_data;
    new_node->next = *head;
    *head = new_node;
}
void printLL(Node *node)
{
    while (node != NULL)
    {
        cout << "->" << node->data;
        node = node->next;
    }
}

int main()
{
    Node *head = NULL;
    push(&head, 20);
    push(&head, 13);
    push(&head, 13);
    push(&head, 11);
    push(&head, 11);
    push(&head, 11);
    cout << "Linked list before duplicate removal ";
    printLL(head);
    removeDuplicates(head);

    cout << "\nLinked list after duplicate removal ";
    printLL(head);
    return 0;
}