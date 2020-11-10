#include<iostream>
using namespace std;

void fib(int n)
{
    int n1=0,n2=1,n3,i;
    cout<<"Normal Fibonacci: "<<"0 1 ";
    for(i=2;i<n;++i)//loop starts from 2 because 0 and 1 are already printed    
    {    
        n3=n1+n2;    
        cout<<n3<<" ";    
        n1=n2;    
        n2=n3;    
    }  
}

int rfib(int n)
{
    if(n<=1) return n;
    return rfib(n-2)+rfib(n-1);
}

int main()
{

    int n;
    cin>>n;
    fib(n);
    char c=255;
    if(c>10){
        cout<<"g";
    }
    else{
        cout<<"L";
    }
    return 0;
}