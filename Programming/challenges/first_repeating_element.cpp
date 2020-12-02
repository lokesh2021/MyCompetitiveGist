#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n = 7;
    int a[n] = {1,2,3,1,2,1,5};
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    int H[n];
    for (int i = 0; i < n; i++)
    {
       H[i]=-1;
    }

    int minidx = INT_MAX;

    for(int i=0;i<n;i++)
    {
        if(H[a[i]]!=-1)
        {
            minidx = min(minidx,H[a[i]]);
        }
        else
        {
            H[a[i]]=i;
        }
    }

    


}

//input
//8
//1 2 0 7 2 0 2 2
// output:
// 2