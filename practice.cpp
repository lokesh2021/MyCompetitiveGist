#include <bits/stdc++.h>
using namespace std;

int NumberOfBalls(int arr[])
{
    int n = sizeof(arr) / sizeof(arr[0]);
    int sum1=0;
    for(int i=0;i<n;i++){
        sum1+=arr[i];
    }
    int sum2=0;
    for(int i=1;i<=n;i++){
        sum2+=(i*i);
    }
    return sum2-sum1;
}

int main()
{
    int arr1[] = {1, 2, 7, 13}; 
	 
    int res;
    res = NumberOfBalls(arr1);
    cout<<res;
    return 0;
}
