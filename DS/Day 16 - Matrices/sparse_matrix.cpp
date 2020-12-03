#include<bits/stdc++.h>
using namespace std;

struct Element
{
    int i;  //ith index of element in sparse matrix
    int j;  //jth index of element in sparse matrix
    int x;  // the non -zero element itself
};

struct sparse
{
    int m;  // m size of matrix in m x n
    int n;  // n size of matrix in m x n
    int num;    // number of non zero elements
    struct Element *ele;
};

void create(struct sparse *s)
{
    cin>>s->m>>s->n; //input m x n size of sparse matrix
    cin>>s->num;     // input number of non-empty elements in sparse matrix
    s->ele = new Element[s->num]; //we are creatng an array in heap of size num
    for(int i=0;i<s->num;i++)
    {
        cin>>s->ele[i].i;   //input row index of non zero element
        cin>>s->ele[i].j;   //input column index of non zero element
        cin>>s->ele[i].x;   //input the non-zero
    }
}

void display(struct sparse s)
{
    int k=0;
    for(int i=0;i<s.m;i++)
    {
        for(int j=0;j<s.n;j++)
        {
            if(i==s.ele[k].i&&j==s.ele[k].j)
            {
                cout<<s.ele[k++].x;
            }
            else
            {
                cout<<"0";
            }
        }
        cout<<"\n";
    }
}

int main()
{
    struct sparse s;
    create(&s);
    display(s);

}