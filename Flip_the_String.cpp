//Could not solve : https://www.codechef.com/COOK124B/problems/FLIP
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string a,b;
        cin>>a;
        cin>>b;
        if(a==b) 
        {
            cout<<0<<endl;
        }
        else
        {
            for(int i=0;i<a.length();i++)
		        if(a[i]==b[i])
                    cout<<a.substr(i+1,i+4)<<endl;
                else
                {
                    cout<<a.substr(i,i+3)<<endl;
                }

        }
    }

}