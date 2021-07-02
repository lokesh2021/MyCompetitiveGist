#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    Node *lchild;
    int data;
    Node *rchild;
};

class Tree
{
private:
    Node *root;

public:
    Tree();
    ~Tree();
    void createTree();
    void preorder(Node *p);
    void preorder() { preorder(root); };
    void inorder(Node *p);
    void inorder() { inorder(root); }
    void postorder(Node *p);
    void postorder() { postorder(root); }
    int countNodes(Node *p);
    int countNodes() { return countNodes(root); };
    void levelorder(Node *p);
    void levelorder() { levelorder(root); }
    int height(Node *p);
    int height() { return height(root); }
    void DestroyTree(Node *p);
};

Tree::Tree()
{
    root = nullptr;
}
Tree::~Tree()
{
    // TODO
}

void Tree::createTree()
{
    Node *p, *t;
    int x;
    queue<Node *> q;
    
    root = new Node;
    cout << "Enter root data: " << flush;
    cin >> x;
    root->data = x;
    root->lchild = nullptr;
    root->rchild = nullptr;
    q.emplace(root);
    while (!q.empty())
    {
        p = q.front();
        q.pop();
        cout << "Enter left child data of " << p->data << ": " << flush;
        cin >> x;
        if (x != -1)
        {
            t = new Node;
            t->data = x;
            t->lchild = nullptr;
            t->rchild = nullptr;
            p->lchild = t;
            q.emplace(t);
        }
        cout << "Enter right child data of " << p->data << ": " << flush;
        cin >> x;
        if (x != -1)
        {
            t = new Node;
            t->data = x;
            t->lchild = nullptr;
            t->rchild = nullptr;
            p->rchild = t;
            q.emplace(t);
        }
    }
}

void Tree::preorder(Node *p)
{
    if (p)
    {
        cout << p->data << ", " << flush;
        preorder(p->lchild);
        preorder(p->rchild);
    }
}

void Tree::inorder(Node *p)
{
    if (p)
    {
        inorder(p->lchild);
        cout << p->data << ", " << flush;
        inorder(p->rchild);
    }
}

void Tree::postorder(Node *p)
{
    if (p)
    {
        postorder(p->lchild);
        postorder(p->rchild);
        cout << p->data << ", " << flush;
    }
}


void Tree::levelorder(Node *p)
{
    queue<Node *> q;
    cout << root->data << ", " << flush;
    q.emplace(root);
    while (!q.empty())
    {
        p = q.front();
        q.pop();
        if (p->lchild)
        {
            cout << p->lchild->data << ", " << flush;
            q.emplace(p->lchild);
        }
        if (p->rchild)
        {
            cout << p->rchild->data << ", " << flush;
            q.emplace(p->rchild);
        }
    }
}

int Tree::countNodes(Node *p)
{
    int x, y;
    if (p != NULL)
    {
        x = countNodes(p->lchild);
        y = countNodes(p->rchild);
        return x + y + 1;
    }
    return 0;
}

int Tree::height(Node *p)
{
    int l = 0, r = 0;
    if (p == nullptr)
        return 0;
    l = height(p->lchild);
    r = height(p->rchild);
    if (l > r)
        return l + 1;
    else
        return r + 1;
}

void Tree::DestroyTree(Node *p)
{
    if (p != nullptr)
    {
        DestroyTree(p->lchild);
        DestroyTree(p->rchild);
        delete p;
    }
}
int main()
{
Tree bt;

    bt.createTree();
    cout << endl;

    cout << "Preorder: " << flush;
    bt.preorder();
    cout << endl;

    cout << "Inorder: " << flush;
    bt.inorder();
    cout << endl;

    cout << "Postorder: " << flush;
    bt.postorder();
    cout << endl;

    cout << "Levelorder: " << flush;
    bt.levelorder();
    cout << endl;

    cout << "Height: " << bt.height() << endl;

    return 0;
}