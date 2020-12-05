#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n,k;
        cin>>n>>k;
        int a[n];
        for(int i=1;i<=n;i++)
        {
            a[i]=i;
        }
        for(int i=1;i<=k;i++)
        {
            cout<<a[i]<<" "<<endl;
        }


    }
}