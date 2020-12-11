#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr[] = {2, 3, 7, 11, 14, 16, 20, 21};
    int n = 8;
    int k = 31;
    int low = 0;
    int high = n - 1;
    while (low < high)
    {
        if (arr[low] + arr[high] == k)
        {
            cout << low << " " << high << endl;
            return 0;
        }
        else if (arr[low] + arr[high] > k)
        {
            high--;
        }
        else
        {
            low++;
        }
    }
    cout << "false";
}

// output:
// 3,6