//https://www.codechef.com/AUG21C/problems/PROBDIFF
#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n1,n2,n3,n4;
    cin >> n1 >> n2 >> n3 >>n4;
    if((n1!=n2 &&n3!=n4)||(n1!=n3&&n2!=n4)) cout<<2<<endl;
    else if((n1==n2 &&n3==n4)||(n1==n3&&n2==n4)) cout<<0<<endl;
    else cout<<1<<endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
}
