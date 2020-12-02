#include <bits/stdc++.h>
using namespace std; 
#define ull unsigned long long

int main()
{
  int t;
    cin>>t;
    while(t--)
    {
        int n,arr[n];
        cin>>n;
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        int count =0;
        // for(int i=0;i<n;i++)
        // {
        //     cout<<arr[i];
        // }
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(arr[j]>arr[j+1]*arr[j])
                {
                    count++;
                }
                    
            }
        }
        cout<<count;
        
    }
}