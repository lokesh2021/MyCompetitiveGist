#include<iostream>
using namespace std;

int LinearSearch(int arr[],int n, int key)
{
    for(int i=0;i<5;i++){
        if(arr[i]==key){
            return i;
        }
    }
    return -1;
}

int BinarySearch(int arr[], int n, int key)
{
    int s=0,e=n;
    while(s<=e)
    {
        int mid = (s+e)/2;
        if(arr[mid]==key) return mid;
        else if(arr[mid]>key)
        {
            e=mid-1;
        }
        else
        {
            s=mid+1;
        }
    }
    return -1;
}

int main()
{
    int n;
    cin>>n;
    int arr[n],key;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cin>>key;
    cout<<"Linear Search->"<<endl;
    cout<<LinearSearch(arr,n,key);
    cout<<"\nBinary Search->"<<endl;
    cout<<BinarySearch(arr,n,key);  

}