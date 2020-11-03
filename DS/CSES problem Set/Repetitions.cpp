// https://cses.fi/problemset/task/1069
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a=0,c=0,g=0,t=0;
    string s;
    cin>>s;
    for(int i=0;i<s.length();i++){
        if(s[i]=='A')
            a++;
        else if (s[i]=='C')
        {
            c++;
        }
        else if (s[i]=='G')
        {
            g++;
        }
        else
        {
            t++;
        }
    }
    cout<<a<<" "<<c<<" "<<g<<" "<<t<<" ";
    int ans = max({a,c,g,t});
    cout<<ans;
}

// Input:ATTCGGGA
// Output:3