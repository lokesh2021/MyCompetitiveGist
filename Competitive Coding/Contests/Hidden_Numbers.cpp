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
        int low = 0;
        int high = n - 1;
        while (low <= high)
        {
            if (arr[low] * arr[high] == k)
            {
                cout << low << " " << high << endl;
                return 0;
            }
            else if (arr[low] * arr[high] > k)
            {
                high--;
            }
            else
            {
                low++;
            }
        }
    }
}