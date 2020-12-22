//Program 4:
//Given a list of numbers, identify those numbers that appear more than twice.

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    unordered_map<int, int> H;
    for (int i = 0; i < n; i++)
    {
        H[arr[i]]++; //storing the count value in an Hashmap
    }
    for (int i = 0; i < n; i++)
    {
        if (H[arr[i]] > 2)
        {
            cout << arr[i] << endl;
            H[arr[i]] = 0; //im restoring the count value to 0, as i dont want to print the repeating character again
        }
    }
}

// inp:
// 10
// 3
// 7
// 2
// 2
// 7
// 4
// 2
// 7
// 7
// 5

// output:
// 7
// 2