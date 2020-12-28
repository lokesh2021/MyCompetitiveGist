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
}