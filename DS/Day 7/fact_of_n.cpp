#include<bits/stdc++.h>
using namespace std;

int Ifact(int n)
{
    int s=1;
    for(int i=1;i<=n;i++){
        s=s*i;
    }
    return s;
}

int Rfact(int n)
{
    if(n==0)
        return 1;
    return Rfact(n-1)*n;
}

int main()
{
    cout<<"Recursive Factorial="<<Rfact(1)<<endl;
    cout<<"Recursion Using loop ="<<Ifact(1);
    return 0;
}