#include <bits/stdc++.h>
using namespace std;
int main()
{
    int m, n, i, j, k;
    cin >> m >> n;

    for (i = m; i < n; i++)
    {
        for (j = 1; j <= pow(i, 1.0 / 3); j++)
        {
            for (k = j + 1; k <= pow(i, 1.0 / 3); k++)
            {
                if (j * j * j + k * k * k == i)
                {
                    cout << i << " " << j << " " << k << " " << endl;
                }
            }
        }
    }
    return 0;
}