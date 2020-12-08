//https://www.codechef.com/DEC20B/problems/POSPREFS
#include <bits/stdc++.h>
using namespace std;
int main ()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;

        int arr[n], d = n-k, i = 0, flag = 1;

        for (i = 0; i < n; i++)
        {
            arr[i] = i+1;
        }

        i = 0;
        while (d--)
        {   
            arr[i] -= 2*arr[i];
            if (flag == 1)
                i += 2;
            else
                i -= 2;

            if (i == n)
            {
                flag = 0;
                i = n-1;
            }
            else if (i == n+1)
            {
                i = n-2;
                flag = 0;
            }

        }
        for (i = 0; i < n; i++)
        {
            cout << arr[i] << " ";
        }
        cout << endl;    
    }
    return 0;
} 