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
    ~BST();
    Node *getRoot() { return root; };
    void insert(int x);
    void inorder(Node *p);

    Node *search(int x);
};

BST::~BST()
{
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

int main()
{
    BST bst;
    bst.insert(10);
    bst.insert(5);
    bst.insert(20);
    bst.insert(8);
    bst.insert(30);

    bst.inorder(bst.getRoot());
    cout<<endl;
    Node *res = bst.search(7);
    if (res)
        cout << "Element exists " <<res->data << endl;
    else
        cout << "Element Not found" << endl;
}