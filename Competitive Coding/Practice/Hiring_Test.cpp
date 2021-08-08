#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n,m,x,y;
    cin>>n>>m>>x>>y;
    int f,p;
    string str;
    while(n--)
    {
        cin>>str;
        f=0,p=0;
        f = count(str.begin(),str.end(),'F');
        p = count(str.begin(),str.end(),'P');
        if(f>=x||(f>=(x-1)&&p>=y)) cout<<1;
        else cout<<0;
    }
    cout<<"\n";
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
        solve();
}
