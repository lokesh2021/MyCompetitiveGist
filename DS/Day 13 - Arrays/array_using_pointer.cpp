#include<iostream>
using namespace std;

struct Array
{
    int *A;
    int size;
    int length;
};

void Display(struct Array arr)
{
    cout<<"Elements in array are: ";
    for(int i=0;i<arr.length;i++)
    {
        cout<<arr.A[i]<<" ";
    }
}

int main()
{
    struct Array arr;
    cout<<"Enter size of array: ";
    cin>>arr.size;
    arr.A = new int[arr.size];
    cout<<"Enter the number of elements: ";
    cin>>arr.length;
    cout<<"Enter Elements"<<endl;
    for(int i=0;i<arr.length;i++)
    {
        cin>>arr.A[i];
    }

    Display(arr);
    return 0;
}
// Output:
// Enter size of array: 10
// Enter the number of elements: 5
// Enter Elements
// 2 3 4 5 6 
// Elements in array are: 2 3 4 5 6