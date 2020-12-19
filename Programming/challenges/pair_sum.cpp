#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr[] = {1};
    int n = 1;
    int k = 1;
    int low = 0;
    int high = n - 1;
    while (low < high)
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
    cout << "false";
    return 0;
}

// output:
// 3,6
