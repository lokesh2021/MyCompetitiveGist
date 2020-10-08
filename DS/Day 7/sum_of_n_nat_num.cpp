#include<bits/stdc++.h>
using namespace std;

int Isum(int n)
{
    int s=0;
    for(int i=1;i<=n;i++){
        s+=i;
    }
    return s;
}

int Rsum(int n)
{
    if(n==0)
        return 0;
    return Rsum(n-1)+n;

    
}

int main()
{
    cout<<"Recursive Sum="<<Rsum(5)<<endl;
    cout<<"Sum Using loop ="<<Isum(5);
    return 0;
}