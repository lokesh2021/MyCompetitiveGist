#include <iostream>
using namespace std;
int main()
{
    int n, s;
    cin >> n >> s;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int sum = 0;

    for (int i = 0, j = i; i < n && j < n; i++, j++)
    {
        sum += a[j];
        cout << sum << endl;
    }
}

// output:
// 1
// 1
// 6
// 12
// 14
// 0
// 5
// 11
// 13
// 5
// 11
// 13
// 6
// 8
// 2