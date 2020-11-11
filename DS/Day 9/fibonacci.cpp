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
}

int rfib(int n)
{
    if(n<=1) return n;
    cout<<n<<endl;
    return rfib(n-2)+rfib(n-1);
}

int main()
{

    int n;
    cin>>n;
    fib(n);
    cout<<"Recursive Fibonacci: "<<rfib(n);
    return 0;
}