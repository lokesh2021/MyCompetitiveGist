#include<iostream>
using namespace std;

void fib(int n)
{
    int n1=0,n2=1,n3,i;
    cout<<"0 1 ";
    for(i=2;i<n;++i)//loop starts from 2 because 0 and 1 are already printed    
    {    
        n3=n1+n2;    
        cout<<n3<<" ";    
        n1=n2;    
        n2=n3;    
    }  
    

}

int main()
{

    int n;
    cin>>n;
    fib(n);
    return 0;
}