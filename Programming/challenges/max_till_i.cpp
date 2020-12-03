#include<iostream>
using namespace std;
int main()
{
    int n=5;
    int arr[n] = { 1, 0,5,6,2 };
    int mx = 0;
    for(int i=0;i<n;i++)
    {
        mx = max(mx,arr[i]);
        cout<<mx<<" ";
    }
}

// output:
// 1 1 5 6 6