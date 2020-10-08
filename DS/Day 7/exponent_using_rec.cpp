#include<bits/stdc++.h>
using namespace std;

// Recursive Exponent =512
// Recursion Exponent in better time complexity =512

int pow2(int m,int n)
{
    if(n==0)
        return 1;
    if(n%2==0)
        return pow2(m*m,n/2);
    else
    {
        return m*pow2(m*m,(n-1)/2);
    }
    
}

int pow1(int m,int n)
{
    if(n==0)
        return 1;
    return pow1(m,n-1)*m;
}

int main()
{
    cout<<"Recursive Exponent="<<pow1(2,9)<<endl;
    cout<<"Recursion Exponent in better time complexity ="<<pow2(2,9);
    return 0;
}