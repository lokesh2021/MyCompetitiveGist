#include <iostream>
using namespace std;
int main()
{
    int n = 4;
    int arr[n] = {-1,-2,-3,-4};
    int mx = -2147483648;

    for (int i = 0; i < n; i++)
    {
        int sum = 0;
        for (int j = i; j < n; j++)
        {
            sum += arr[j];
            // cout << sum << endl;
            mx = max(sum, mx);
        }
        // cout << endl;
    }
    cout << mx;
}

// output:
// 13