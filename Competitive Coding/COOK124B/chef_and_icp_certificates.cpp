#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,k;
    cin>>n>>m>>k;
    int finalsum = 0;
    while(n--)
    {
        int T,sum=0,q;
    
        for(int i=0;i<k;i++)
        {
            cin>>T;
            sum+=T;
        }
        cin>>q;

        if(sum>=m && q<=10)
        {
            finalsum++;
        }
        
    }
    cout<<finalsum;

}