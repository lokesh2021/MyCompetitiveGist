#include<iostream>
using namespace std;
struct Matrix
{
    int A[10];
    int n;
};

void set(struct Matrix *m,int i,int j,int x)
{
    if(i==j)
        m->A[i-1]=x;
}

int get(struct Matrix *m,int i,int j)
{
    if(i==j)
        return m->A[i-1];
}

void display(struct Matrix m)
{
    for(int i=0;i<m.n;i++)
    {
        for(int j=0;j<m.n;j++)
        {
            if(i!=j)
                cout<<"0 ";
            else
            {
                cout<<m.A[i-1]<<" ";
            }
        }
        cout<<endl;
    }
}

int main()
{
    struct Matrix m;
    m.n=4;

    set(&m,1,1,5);
    set(&m,2,2,6);
    set(&m,3,3,7);
    set(&m,3,3,8);
    display(m);

    return 0;
}