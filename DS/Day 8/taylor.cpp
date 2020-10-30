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

//Taylor Series Horner’s Rule using Recursion
double horners(int x, int n)
{
 static double s;
 if(n==0)
 return s;
 s=1+x*s/n;
 return horners(x,n-1);
}

//Taylor Series Horner’s Rule using Iteration
double hornersi(int x, int n)
{
 double s=1;
 int i;
 double num=1;
 double den=1;

 for(i=1;i<=n;i++)
 {
 num*=x;
 den*=i;
 s+=num/den;
 }
 return s;
}

int main()
{
    cout<<"normal: "<<taylor(3,10)<<endl; 
    cout<<"Taylor Series Horner’s Rule using Recursion: "<<horners(3,10)<<endl;     
    cout<<"Taylor Series Horner’s Rule using Iteration: "<<hornersi(3,10)<<endl;     
    return 0;
}