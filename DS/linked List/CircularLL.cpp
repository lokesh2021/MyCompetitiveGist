#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
};

class CircularLinkedList
{
private:
    Node *head;

public:
    CircularLinkedList(int A[], int n);

    int Length();
    void Display();
    void recursiveDisplay(Node *p);
    Node *getHead() { return head; }
    void InsertAtIndex(int pos, int x);
    int DeleteAtIndex(int pos);

    ~CircularLinkedList();
};

CircularLinkedList::CircularLinkedList(int A[], int n)
{

    Node *t;
    Node *tail;

    head = new Node;

    head->data = A[0];
    head->next = head;
    tail = head;

    for (int i = 1; i < n; i++)
    {
        t = new Node;
        t->data = A[i];
        t->next = tail->next;
        tail->next = t;
        tail = t;
    }
}

int CircularLinkedList::Length()
{
    Node *p = head;
    int len = 0;
    do
    {
        len++;
        p = p->next;

    } while (p != head);
    return len;
}

void CircularLinkedList::Display()
{
    Node *p = head;
    do
    {
        cout << p->data << " -> " << flush;
        p = p->next;
    } while (p != head);
    cout << endl;
}

void CircularLinkedList::recursiveDisplay(Node *p)
{
    static int flag = 0;
    if (p != head || flag == 0)
    {
        flag = 1;
        cout << p->data << " -> " << flush;
        recursiveDisplay(p->next);
    }
    flag = 0;
}

CircularLinkedList::~CircularLinkedList()
{
    Node *p = head;
    while (p->next != head)
    {
        p = p->next;
    }

    while (p != head)
    {
        p->next = head->next;
        delete head;
        head = p->next;
    }

    if (p == head)
    {
        delete head;
        head = nullptr;
    }
}

void CircularLinkedList::InsertAtIndex(int pos, int x)
{
    Node *t = new Node, *p = head;
    int i;
    if (pos == 0)
    {
        t->data = x;
        if (head == NULL)
        {
            head = t;
            t->next = head;
        }
        else
        {
            while (p->next != head)
                p = p->next;
            p->next = t;
            t->next = head;
            head = t; //no need of changing the head untill said so
        }
    }
    else
    {
        for (i = 0; i < pos - 1; i++)
            p = p->next;
        t->data = x;
        t->next = p->next;
        p->next = t;
    }
}

int CircularLinkedList::DeleteAtIndex(int pos)
{
    Node *p = head, *q;
    int i, x;
    if (pos < 0 || pos > Length())
        return -1;
    if (pos == 1)
    {
        while (p->next != head)
            p = p->next;
        x = head->data;
        if (head==p)
        {
            delete head;
            head = NULL;
        }
        else
        {
            p->next = head->next;
            delete head;
            head = p->next;
        }
    }
    else
    {
        for (i = 0; i < pos-2; i++)
            p = p->next;
        q = p->next;
        p->next=q->next;
        x = q->data;
        delete q;
    }
    return x;
}

int main()
{

    int A[] = {2, 3, 5, 7, 9};

    CircularLinkedList cl(A, sizeof(A) / sizeof(A[0]));
    cl.Display();
    // Node* h = cl.getHead();
    // cl.recursiveDisplay(h);
    // cl.InsertAtIndex(0, 1);
    // cl.Display();
    // cl.InsertAtIndex(3, 6);
    // cl.Display();
    cl.DeleteAtIndex(1);
    cl.Display();
    cl.DeleteAtIndex(3);
    cl.Display();
    return 0;
}