#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
};

class Stack
{
private:
    Node *top;

public:
    Stack();
    ~Stack();
    void push(int x);
    int pop();
    int stackTop();
    int peek(int index);
    void display();
};

Stack::Stack()
{
    top = NULL;
}

Stack::~Stack()
{
    Node *p = top;
    while (top)
    {
        top = top->next;
        delete p;
        p = top;
    }
}

void Stack::push(int x)
{
    Node *t = new Node;
    if (t == NULL)
        cout << "Stack Overflow" << endl;
    else
    {
        t->data = x;
        t->next = top;
        top = t;
    }
}

int Stack::pop()
{
    int x = -1;
    Node *p;
    if (top == NULL)
        cout << "Stack Underflow" << endl;
    else
    {
        p=top;
        x=p->data;
        top=top->next;
        delete p;
    }
    return x;
}

int Stack::stackTop() {
    if (top){
        return top->data;
    }
    return -1;
}

int Stack::peek(int index) {
    if (!top){
        return -1;
    } else {
        Node* p = top;
 
        for (int i=0; p != nullptr && i<index-1; i++){
            p = p->next;
        }
 
        if (p != nullptr){
            return p->data;
        } else {
            return -1;
        }
    }
}

void Stack::display()
{
    Node *p = top;
    while (p)
    {
        cout << p->data << " | ";
        p = p->next;
    }
    cout << endl;
}

int main()
{
    int A[] = {1, 2, 3, 4, 5};
    int n = sizeof(A) / sizeof(A[0]);
    Stack stk;
    for (int i = 0; i < n; i++)
    {
        stk.push(A[i]);
    }
    stk.display();
    stk.pop();
    stk.display();
    cout<<stk.stackTop()<<endl;
    cout<<stk.peek(2);

}