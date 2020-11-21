#include<bits/stdc++.h>
using namespace std;

void Union(int a1[], int a2[], int n1, int n2)
{
    int i,j,k=0;
    int n3 = n1+n2;
    int a3[n3]; 
    while(i<n1&&j<n2)
    {
        if(a1[i]==a2[j])
        {
            a3[i]==a1[i];
        }
    }
    for(int i=0;i<n3;i++)
    {
        cout<<i<<" ";
    }
}

int main()
{
     int arr1[5] = {1,2,3,4,5};
     int arr2[5] = {6,2,7,4,8};
    Union(arr1,arr2,5,5);
    cout<<endl;
    cout<<90000*5*73;
}