//Find a Pair with sum (a+b=sum) 
#include<bits/stdc++.h>
using namespace std;

//using Using Hashing

int main()
{
    int n=7;
    int arr[n]={6,3,8,10,16,7,5,2,9,14};
    int sum=10;
    int max = *max_element(arr , arr + n);
    int H[max];
    for(int i=0;i<n;i++)
    {
        if(H[sum-arr[i]]!=0)
        {
            cout<<arr[i]<<"+"<<sum-arr[i]<<"="<<sum<<endl;
        }
        H[arr[i++]];
    }

}