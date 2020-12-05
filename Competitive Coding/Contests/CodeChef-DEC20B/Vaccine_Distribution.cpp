#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll int n, t, people, d;

    cin >> t;
    while (t--)
    {
        cin >> n >> d;
        ll int risk = 0;
        ll int no_risk = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> people;
            if (people >= 80 || people <= 9)
            {
                risk++;
            }
            else
            {
                no_risk++;
            }
        }

        ll int ans = 0;
        ans +=ceil(risk * 1.0 /d);
        ans += ceil(no_risk * 1.0 / d);
        cout << ans << endl;
    }
}