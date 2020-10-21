#include<bits/stdc++.h>
using namespace std;

//More the value of X, more accurate the result
//Taylor Series in normal time
double taylor(int x, int n)
{
    static double p=1,f=1;
    double r;
    if(n==0)
        return 1;
    r = taylor(x,n-1);
    p = p*x;
    f = f*n;
    return r+p/f;
    
}
int main()
{
    cout<<taylor(3,10);     //output : 5
    return 0;
}