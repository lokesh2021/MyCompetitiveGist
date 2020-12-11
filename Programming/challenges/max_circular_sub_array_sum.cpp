#include <bits/stdc++.h>
using namespace std;

int kadane(int arr[],int n)
{
    int currsum = 0;
    int maxsum = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        currsum += arr[i];
        if (currsum < 0)
            currsum = 0;
        maxsum = max(maxsum, currsum);
    }
    return maxsum;
}

int main()
{
    int arr[] = {4,-4,6,-6,10,-11,12};
    int n = 7;
    int wrapsum;
    int nonwrapsum;

    nonwrapsum = kadane(arr,n);
    int totalsum = 0;
    for(int i=0;i<n;i++)
    {
        totalsum += arr[i];
        arr[i]=-arr[i];
    }
    
    wrapsum = totalsum + kadane(arr,n);
    cout<<max(wrapsum,nonwrapsum)<<endl;
}

// output:
// 7