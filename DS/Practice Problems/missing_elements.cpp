#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[7]={1,2,3,4,5,7,8};
    int n = sizeof(arr)/sizeof(arr[0]);
    int sum=0;
    for(int i=0;i<n;i++)
    {
        sum += arr[i];
    }
    cout<<sum<<endl;
    cout<<n;
}