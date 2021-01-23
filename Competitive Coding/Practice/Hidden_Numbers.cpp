//https://www.codechef.com/UWCOI21/problems/UWCOI21A
//couldn't solve the solution due to time constraint
//below solution is wrong
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    wcin >> t;
    while (t--)
    {
        long int n;
        cin >> n;
        int k = n;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            arr[i] = i;
        }
        int H[n];
        for (int i = 0; i < n; i++)
        {
            if (H[arr[i] / n] != 0)
            {
                cout << arr[i] << "+" << n - arr[i] << "=" << n << endl;
            }
            H[arr[i++]];
        }
    }
}