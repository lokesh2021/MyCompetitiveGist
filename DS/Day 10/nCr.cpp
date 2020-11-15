#include<iostream>
using namespace std;

int ncr(int n, int r)
{
    if(n==r||r==0) return 1;
    return ncr(n-1,r-1)+ncr(n-1,r);
}

int main()
{
    cout<<ncr(5,2);
    return 0;
}