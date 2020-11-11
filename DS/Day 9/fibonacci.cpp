#include<iostream>
using namespace std;

void fib(int n)
{
    int t1 = 0, t2 = 1, nextTerm = 0;
    for (int i = 1; i <= n; ++i)
    {
        // Prints the first two terms.
        if(i == 1)
        {
            cout <<" "<<t1;
            continue;
        }
        if(i == 2)
        {
            cout << t2 << " ";
            continue;
        }
        nextTerm = t1 + t2;
        t1 = t2;
        t2 = nextTerm;
        
        cout << nextTerm << " ";
    }
    cout<<endl;
}

int rfib(int n)
{
    if(n<=1) return n;
    return rfib(n-2)+rfib(n-1);
}

int F[10];

int mFib(int n){
    if(n<=1) 
    {
        F[n]=n; 
        return n;
    }
    else
    {
        if(F[n-2]==-1)
            F[n-2]=mFib(n-2);
        if(F[n-1]==-1)
            F[n-1]=mFib(n-1);

        return F[n-2]+F[n-1];
    }
}

int main()
{

    int n;
    cin>>n;
    fib(n);
    cout<<"Recursive Fibonacci: "<<rfib(n)<<endl;
    for(int i=0;i<10;i++){
        F[i]=-1;
    }
    cout<<"Memoisation Method: "<<mFib(10);
    return 0;
}