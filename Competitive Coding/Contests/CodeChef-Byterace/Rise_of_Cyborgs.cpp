//https://www.codechef.com/BYTR20B/problems/CYBV
#include <bits/stdc++.h>
using namespace std;

int RM(int i, int j, int arr[])
{
    int mini = arr[0];
    for (int i = 0; i <= j; i++)
    {
        mini = min(mini, arr[i]);
    }
    cout << mini;
    return mini;
}

void solve()
{
    int n, m;
    cin >> n >> m;
    int a[n];
    int b[m];
    for (int i = 0; i < n; i++)
    {
        cin >> a[n];
    }
    for (int i = 0; i < n; i++)
    {
        cin >> b[m];
    }
    for (int i = 0; i < n; i++)
    {
        cout << b[m];
    }

    int sumRM = 0;
    for (int i = 0; i < m; i++)
    {
        for (int j = i; j < m; j++)
        {
            sumRM += RM(b[i], b[j], a);
        }
    }
    cout << sumRM << endl;
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;
    while (t--)
        solve();
}