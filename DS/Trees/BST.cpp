#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *lchild, *rchild;
};

class BST
{
private:
    Node *root;

public:
    BST() { root = nullptr; };
    Node *getRoot() { return root; };
    int Height(Node *p);
    void insert(int x);
    void inorder(Node *p);
    Node *search(int x);
    Node *Delete(Node *p, int x);
    Node *InPre(Node *p);
    Node *InSucc(Node *p);
    ~BST();
};

BST::~BST()
{
}

int BST::Height(Node *p)
{
    int x;
    int y;
    if (p == nullptr)
    {
        return 0;
    }
    x = Height(p->lchild);
    y = Height(p->rchild);
    return x > y ? x + 1 : y + 1;
}

void BST::insert(int x)
{
    Node *p = root;
    Node *r;
    Node *t;

    if (root == nullptr)
    {
        t = new Node;
        t->data = x;
        t->lchild = nullptr;
        t->rchild = nullptr;
        root = t;
        return;
    }

    while (p != nullptr)
    {
        r = p;
        if (x < p->data)
            p = p->lchild;
        else
            p = p->rchild;
    }
    t = new Node;
    t->data = x;
    t->lchild = nullptr;
    t->rchild = nullptr;
    if (x < r->data)
        r->lchild = t;
    else
        r->rchild = t;
}

void BST::inorder(Node *p)
{
    if (p)
    {
        inorder(p->lchild);
        cout << p->data << ", " << flush;
        inorder(p->rchild);
    }
}

Node *BST::search(int x)
{
    Node *p = root;
    while (p)
    {
        if (p->data == x)
            return p;
        else if (x < p->data)
            p = p->lchild;
        else if (x > p->data)
            p = p->rchild;
    }
    return nullptr;
}

Node *BST::Delete(Node *p, int x)
{
    Node *q;
    if (p == nullptr)
        return nullptr;
    if (p->lchild == nullptr && p->rchild == nullptr)
    {
        if (p == root)
            root = nullptr;
        delete p;
        return nullptr;
    }

    if (x < p->data)
        p->lchild = Delete(p->lchild, x);
    else if (x > p->data)
        p->rchild = Delete(p->rchild, x);
    else
    {
        if (Height(p->lchild) > Height(p->rchild))
        {
            q = InPre(p->lchild);
            p->data = q->data;
            p->lchild = Delete(p->lchild, q->data);
        }
        else
        {
            q = InSucc(p->rchild);
            p->data = q->data;
            p->rchild = Delete(p->rchild, q->data);
        }
    }
    return p;
}

Node *BST::InPre(Node *p)
{
    while (p && p->rchild != nullptr)
    {
        p = p->rchild;
    }
    return p;
}

Node *BST::InSucc(Node *p)
{
    while (p && p->lchild != nullptr)
    {
        p = p->lchild;
    }
    return p;
}

int main()
{
    BST bst;
    bst.insert(10);
    bst.insert(5);
    bst.insert(20);
    bst.insert(8);
    bst.insert(30);

    bst.inorder(bst.getRoot());
    cout << endl;
    Node *res = bst.search(7);
    if (res)
        cout << "Element exists " << res->data << endl;
    else
        cout << "Element Not found" << endl;
}