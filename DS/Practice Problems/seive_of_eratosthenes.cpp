//returning Primes using arrays
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    bool arr[n+1];
    for(int i=0;i<n;i++)
    {
        arr[i]=1;
    }
    arr[0]=0;
    arr[1]=0;
    for(int i=2;i*i<=n;i++)
    {
        for(int j=2*i;j<=n;j+=i)
        {
            arr[j]=0;
        }
    }
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}