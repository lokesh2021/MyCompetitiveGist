#include<bits/stdc++.h>
using namespace std;
int fun(int n)
{
    if(n>100)
        return n-10;
    return fun(fun(n+11));      //Nested Recursion

}

int main()
{
    int r;
    r = fun(30);
    cout<<r;        // 91
    return 0;
}