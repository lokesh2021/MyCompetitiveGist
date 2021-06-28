#include <iostream>
using namespace std;

class Node
{
public:
    Node *prev;
    int data;
    Node *next;
};

class DoublyLL
{
private:
    Node *head;

public:
    DoublyLL(int A[], int n);

    void Display();
    int Length();
    void Insert(int pos, int x);
    void Delete(int pos);
    void Reverse();
};

DoublyLL::DoublyLL(int A[], int n)
{

    Node *t, *last;

    head = new Node;
    head->data = A[0];
    head->prev = head->next = NULL;
    last = head;

    for (int i = 1; i < n; i++)
    {
        t = new Node;
        t->data = A[i];
        t->next = last->next;
        t->prev = last;
        last->next = t;
        last = t;
    }
}

void DoublyLL::Display()
{
    Node *p = head;
    while (p)
    {
        cout << p->data << " = " << flush;
        p = p->next;
    }
    cout << endl;
}

int DoublyLL::Length()
{
    Node *p = head;
    int len = 0;
    while (p)
    {
        len++;
        p = p->next;
    }
    return len;
}

void DoublyLL::Insert(int pos, int x)
{
    Node *p = head, *t = new Node;
    int i;
    if (pos < 1 || pos > Length())
        return;
    if (pos == 0)
    {
        t->prev = NULL;
        t->data = x;
        t->next = head;
        head->prev = t;
        head = t;
    }
    else
    {
        t->data = x;
        for (i = 1; i < pos - 1; i++)
            p = p->next;
        t->next = p->next;
        t->prev = p;
        if (p->next)
            p->next->prev = t;
        p->next = t;
    }
}

void DoublyLL::Delete(int pos)
{
    Node *p = head;
    if (pos < 1 || pos > Length())
        return;
    if (pos == 1)
    {
        head = head->next;
        delete p;
        if (head)
            head->prev = NULL;
    }
    else
    {
        for (int i = 0; i < pos - 1; i++)
            p = p->next;
        p->prev->next = p->next;
        if (p->next)
            p->next->prev = p->prev;
        delete p;
    }
}

void DoublyLL::Reverse()
{
    Node *p = head, *t;
    while (p)
    {
        t=p->next;
        p->next=p->prev;
        p->prev=t;
        p=p->prev;
        if(p!=NULL && p->next==NULL)
            head = p;
    }
}

int main()
{

    int A[] = {2, 3, 5, 7, 9};

    DoublyLL dl(A, sizeof(A) / sizeof(A[0]));
    dl.Display();
    // dl.Insert(0, 1);
    // dl.Display();
    // dl.Insert(3, 4);
    // dl.Display();
    // dl.Delete(2);
    // dl.Display();
    dl.Reverse();
    dl.Display();
    return 0;
}