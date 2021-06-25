#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int data;
    Node *next;
};

class LinkedList
{
private:
    Node *first;

public:
    LinkedList()
    {
        first = NULL;
    }
    LinkedList(int A[], int n);
    ~LinkedList();
    void Display();
    void Insert(int index, int x);
    void InsertInSortedLL(int x);
    int Delete(int index);
    int Length();
    bool IsSorted();
    void RemoveDuplicates();
    void ReversingLinks();
};

LinkedList::LinkedList(int A[], int n)
{
    Node *last, *t;
    first = new Node;
    first->data = A[0];
    first->next = NULL;
    last = first;
    for (int i = 1; i < n; i++)
    {
        t = new Node;
        t->data = A[i];
        t->next = NULL;
        last->next = t;
        last = t;
    }
}

LinkedList::~LinkedList()
{
    Node *p = first;
    while (first)
    {
        first = first->next;
        delete p;
        p = first;
    }
}

void LinkedList::Display()
{
    Node *p = first;
    while (p)
    {
        cout << p->data << " ";
        p = p->next;
    }
    cout << endl;
}

int LinkedList::Length()
{
    Node *p = first;
    int len = 0;
    while (p)
    {
        len++;
        p = p->next;
    }
    return len;
}

void LinkedList::Insert(int index, int x)
{
    Node *p = first, *t;
    if (index < 0 || index > Length())
        return;
    t = new Node;
    t->data = x;
    t->next = NULL;
    if (index == 0)
    {
        t->next = first;
        first = t;
    }
    else
    {
        for (int i = 0; i < index - 1; i++)
            p = p->next;
        t->next = p->next;
        p->next = t;
    }
}

int LinkedList::Delete(int index)
{
    Node *p, *q = NULL;
    int x = -1;
    if (index < 1 || index > Length())
        return -1;
    p = first;
    if (index == 1)
    {
        first = first->next;
        x = p->data;
        delete p;
    }
    else
    {
        for (int i = 0; i < index - 1; i++)
        {
            q = p;
            p = p->next;
        }
        q->next = p->next;
        x = p->data;
        delete p;
    }
    return x;
}

void LinkedList::InsertInSortedLL(int x)
{
    Node *t, *p = first, *q = NULL;
    t = new Node;
    t->data = x;
    t->next = NULL;
    if (p == NULL)
        p = t;
    else
    {
        while (p && p->data < x)
        {
            q = p;
            p = p->next;
        }
        if (p == first)
        {
            t->next = first;
            first = t;
        }
        else
        {
            t->next = q->next;
            q->next = t;
        }
    }
}

bool LinkedList::IsSorted()
{
    int x = INT_MIN;
    Node *p = first;
    while (p != NULL)
    {
        if (p->data < x)
            return false;
        x = p->data;
        p = p->next;
    }
    return true;
}

void LinkedList::RemoveDuplicates()
{
    Node *p = first;
    Node *q = first->next;
    while (q != NULL)
    {
        if (p->data != q->data)
        {
            p = q;
            q = q->next;
        }
        else
        {
            p->next = q->next;
            delete q;
            q = p->next;
        }
    }
}

void LinkedList::ReversingLinks()
{
    Node *p = first;
    Node *q = NULL;
    Node *r = NULL;
    while (p != NULL)
    {
        r = q;
        q = p;
        p = p->next;
        q->next = r;
    }
    first = q;
}
int main()
{
    int A[] = {3, 5, 8, 15, 17, 20};
    LinkedList l(A, 6);
    l.Display();
    //l.Insert(3, 9);
    //l.Display();
    //l.Delete(4);
    //l.Display();
    //l.InsertInSortedLL(18);
    //l.Display();
    //cout << l.IsSorted() << endl;
    //l.RemoveDuplicates();
    //l.Display();
    l.ReversingLinks();
    l.Display();

    return 0;
}