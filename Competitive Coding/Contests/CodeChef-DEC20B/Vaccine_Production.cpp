#include<bits/stdc++.h>
using namespace std;
int main()
{
    int d1,v1,d2,v2,p;
    cin>>d1>>v1>>d2>>v2>>p;
    int count =0;
    int minday = min(d1,d2);
    int res= 0;
    int c =0;
    while(c<p)
    {
        res++;
        if(res>=d1) c+=v1;
        if(res>=d2) c+=v2;
    }
    cout<<res;
}