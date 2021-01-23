#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    int y = 0, z = 0, n, m, max, min, suma = 0, sumb = 0, ans = -1, c, j, indexa, indexb, k, swaps = 0;
    while (t--)
    {
        cin >> n >> m;
        int a[n], b[m], i;
        suma = 0;
        sumb = 0;
        for (i = 0; i < n; i++)
        {
            cin >> a[i];
            suma += a[i];
        }
        for (i = 0; i < m; i++)
        {
            cin >> b[i];
            sumb += b[i];
        }
        c = n;
        while (suma <= sumb && c > 0)
        {
            swaps++;
            min = *min_element(a, a + n);
            max = *max_element(b, b + m);
            for (j = 0; j < n; j++)
            {
                if (min == a[j])
                {
                    indexa = j;
                }
            }
            for (j = 0; j < m; j++)
            {
                if (max == b[j])
                {
                    indexb = j;
                }
            }
            //swapping
            k = a[indexa];
            a[indexa] = b[indexb];
            b[indexb] = k;

            for (i = 0; i < n; i++)
            {
                y += a[i];
            }
            suma = y;
            y = 0;
            for (i = 0; i < m; i++)
            {
                z += b[i];
            }
            sumb = z;
            z = 0;
            c--;
        }
        if (suma > sumb && c == n)
        {
            cout << "0";
        }
        else if (suma <= sumb)
        {
            cout << ans;
        }
        else if (suma > sumb)
        {
            cout << swaps;
        }
        cout << "\n";
        swaps = 0;
    }
    return 0;
}