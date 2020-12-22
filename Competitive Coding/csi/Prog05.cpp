#include <bits/stdc++.h>
using namespace std;

void cal_SD(float arr[], int len)
{
    float sum = 0.0, mean, sd = 0.0;

    int i;

    for (i = 0; i < len; ++i)
    {
        sum += arr[i];
    }

    mean = sum / len;

    for (i = 0; i < len; ++i)
        sd += pow(arr[i] - mean, 2);

    cout << setprecision(5) << sqrt(sd / len);
}

int main()
{
    float arr[10];
    int i;
    int len = 0;
    for (i = 0; i < INT_MAX; i++)
    {
        cin >> arr[i];
        if (arr[i] == 0)
        {
            len = i;
            break;
        }
    }
    // for (i = 0; i < len; i++)
    // {
    //     cout << arr[i] << endl;
    // }

    cal_SD(arr, len);

    return 0;
}

// input : 1.9 1.2 1.6 0
//output: 0.28674
