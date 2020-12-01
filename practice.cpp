#include <iostream>
using namespace std;
int main()
{
    int n=6;
    int arr[n] = {2, 4, 1, 5 ,6 ,3};
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int key,j;
    for (int i = 1; i < n; i++)
    {   
        key = arr[i];
        j = i-1;
        while(j>=0&&key<arr[j])
        {
            arr[j+1] = arr[j];
            j=j-1;
        }
        arr[j+1] = key;
    }

    for (int i = 0; i < n; i++)
    {
        cout<< arr[i];
    }
}