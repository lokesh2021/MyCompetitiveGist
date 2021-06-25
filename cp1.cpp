#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int *arr = new int[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int data;
    cin >> data;

    int low = 0;
    int high = n - 1;
    int ceil = INT_MAX;
    int floor = INT_MIN;
    while (low <= high)
    {
        int mid = (low + high) / 2;
        if (data < arr[mid])
        {
            high = mid - 1;
            ceil = arr[mid];
        }
        else if (data > arr[mid])
        {
            low = mid + 1;
            floor = arr[mid];
        }
        else
        {
            ceil = floor = arr[mid];
            break;
        }
    }
    cout << ceil;
    cout << floor;
}