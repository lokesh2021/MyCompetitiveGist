//https://www.codechef.com/AUG21C/problems/OLYRANK
#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n1, n2, n3, n4, n5, n6;
    cin >> n1 >> n2 >> n3 >> n4 >> n5 >> n6;
    int r1 = n1 + n2 + n3;
    int r2 = n4 + n5 + n6;
    if(r1>r2) cout<<1<<endl;
    else cout<<2<<endl;
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
