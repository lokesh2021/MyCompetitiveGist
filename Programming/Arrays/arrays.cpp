#include <iostream>
#include <climits>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int A[n];
    for (int i = 0; i < n; i++)
    {
        cin >> A[i];
    }

    int maxNo = INT_MIN, minNo = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        maxNo = max(maxNo, A[i]);
        minNo = min(minNo, A[i]);
    }
    cout << "Max Numner: " << maxNo << endl;
    cout << "Min Numner: " << minNo << endl;
}