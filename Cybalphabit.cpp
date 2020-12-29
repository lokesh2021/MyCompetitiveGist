//https://www.codechef.com/BYTR20B/problems/CAB
#include <iostream>
#include <cmath>
using namespace std;

int power(int n, int p = 0)
{
    int temp, i = 0;
    for (; i < 26; i++)
    {
        temp = pow(2, p);
        if (temp == n || temp > n)
        {
            break;
        }
        p++;
    }
    return i - 1;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        if (k < n)
        {
            printf("-1\n");
        }
        else if (k == n)
        {
            string st;
            for (int i = 0; i < k; i++)
            {
                st += (char)97;
            }
            cout << st << endl;
        }
        else
        {
            int high = power(k);
            string st;
            //printf("%d\n",high);
            while (n > 0)
            {
                if (k - pow(2, high) >= n - 1)
                {
                    n--;
                    st += (char)(97 + high);
                    k = k - pow(2, high);
                }
                else
                {
                    high = high - 1;
                }
            }
            if (k == 0)
            {
                cout << st << endl;
            }
            else
            {
                cout << -1 << endl;
            }
        }
    }
    return 0;
}