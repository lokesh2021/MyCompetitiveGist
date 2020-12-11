#include <bits/stdc++.h>
using namespace std;
int main()
{
    int arr[] = {-1, 4, -6, 7, -4};
    int n = 5;
    int currsum = 0;
    int maxsum = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        currsum += arr[i];
        cout << currsum << endl;
        if (currsum < 0)
            currsum = 0;
        maxsum = max(maxsum, currsum);
    }
    cout << maxsum;
}

// output:
// 7