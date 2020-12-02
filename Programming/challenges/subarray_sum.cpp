#include <iostream>
using namespace std;
int main()
{
    int n = 5;
    int arr[n] = {1, 0, 5, 6, 2};
    for (int i = 0; i < n; i++)
    {
        int sum=0;
        for (int j = i; j < n; j++)
        {
            sum+=arr[j];
            cout<<sum<<endl;
        }
        cout<<endl;
        
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