#include<iostream>
using namespace std;
int main()
{
    int *p,*q;

    p = new int[5];
    p[0]=1; p[1]=2; p[2]=3; p[3]=4; p[4]=5;

    q = new int[10];
 
    for(int i=0;i<5;i++)
    {
        q[i]==p[i];         //copying elements from "p" to "q"
    }

    delete []p;
    p=q;                    //passing the ponter head (address) from 'p' to 'q'
    q=NULL;                 // making q null because we dont want 'q' to point as same as 'p'

    for(int i=0;i<5;i++)
    {
        cout<<p[i]<<" ";
    }

    return 0;

}

// output:
// 1 2 3 4 5 
// 6 7 8 9 10