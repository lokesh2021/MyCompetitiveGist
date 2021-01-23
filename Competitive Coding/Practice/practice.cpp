#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> arr = {18, 19, 23, 15};
    vector<int> arr1 = arr;
    vector<int> sd;
    int n = 4;
    for (auto i = 0; i < n; i++)
    {
        int s = 0;
        while (arr[i] != 0)
        {
            s = s + arr[i] % 10;
            arr[i] = arr[i] / 10;
        }
        sd.push_back(s);
    }
    int mx = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (sd[i] == sd[j])
            {
                int el = arr1[i] + arr1[j];
                mx = max(mx, el);
            }
        }
    }
    if (mx == 0)
    {
        cout << -1;
    }
    else
        cout << mx;
}