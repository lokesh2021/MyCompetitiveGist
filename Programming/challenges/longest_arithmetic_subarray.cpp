#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n=7;
    int arr[n] = { 10,7,4,6,8,10,11 };

    int ans=2;
    int dif = arr[1]-arr[0];
    int j=2;
    int count =2;
    while(j<n)
    {
        if(dif == arr[j]-arr[j-1])
        {
            count++;
        }
        else
        {
            dif = arr[j] - arr[j-1];
            count=2;
        }
        ans = max(ans,count);
        j++;
    }
    cout<<ans;
}

// output:
// 1 1 5 6 6