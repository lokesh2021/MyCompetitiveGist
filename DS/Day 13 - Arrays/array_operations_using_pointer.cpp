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
    cout<<"Elements in array are: "<<endl;
    for(int i=0;i<arr.length;i++)
    {
        cout<<arr.A[i]<<" ";
    }
    cout<<endl;
}

//Append Element at the end of array
void Append(struct Array *arr,int x)
{
    if(arr->length<arr->size)
    {
        arr->A[arr->length++]=x;
    }

    cout<<"Array elements after appending are:"<<endl;
    for(int i=0;i<arr->length;i++)
    {
        cout<<arr->A[i]<<" ";
    }
    cout<<endl;
}

//Inserting Element at the given Index
void Insert(struct Array *arr,int index,int x)
{
    if(index>=0 && index<=arr->length)  //checking whether index is in the range of array length
    {
        for(int i=arr->length;i>index;i--)
        {
            arr->A[i]=arr->A[i-1];
        }
        arr->A[index]=x;
        arr->length++;
    }

    cout<<"Array elements after Inserting are:"<<endl;
    for(int i=0;i<arr->length;i++)
    {
        cout<<arr->A[i]<<" ";
    }
    cout<<endl;
}


//Delete Element at the given Index
void Insert(struct Array *arr,int index)
{
    int x=0;
    if(index>=0 && index<=arr->length)  //checking whether index is in the range of array length
    {
        x=arr->A[index];
        for(int i=index;i<arr->length;i++)
        {
            arr->A[i]=arr->A[i+1];
        }
        arr->length--;
    }

    cout<<"Deleted Element is: "<<x<<endl;
    cout<<"Array elements after Deleting are:"<<endl;
    for(int i=0;i<arr->length;i++)
    {
        cout<<arr->A[i]<<" ";
    }
    cout<<endl;
}

//Reversing an Array in Linear Method ( TC:-O(2n) or O(n) )
void reverse(struct Array *arr)
{
    int i,j;
    int *B;
    B = new int[arr->length];
    for(i=arr->length-1,j=0;i>=0;i--,j++)
    {
        B[j]=arr->A[i];
    }
    for(i=0;i<arr->length;i++)
    {
        arr->A[i]=B[i];
    }
    cout<<"Array elements after Reversing are:"<<endl;
    for(int i=0;i<arr->length;i++)
    {
        cout<<arr->A[i]<<" ";
    }

}

int main()
{
    struct Array arr;
    cout<<"Enter size of array: "<<endl;
    cin>>arr.size;
    arr.A = new int[arr.size];
    cout<<"Enter the number of elements: "<<endl;
    cin>>arr.length;
    cout<<"Enter Elements"<<endl;
    for(int i=0;i<arr.length;i++)
    {
        cin>>arr.A[i];
    }

    Display(arr);
    Append(&arr,9);
    Insert(&arr,3,1);
    Insert(&arr,3);
    reverse(&arr);
    return 0;
}

// Output:
// Enter size of array: 
// Enter the number of elements: 
// Enter Elements
// Elements in array are: 
// 2 3 4 5 7 
// Array elements after appending are:
// 2 3 4 5 7 9 
// Array elements after Inserting are:
// 2 3 4 1 5 7 9 
// Deleted Element is: 1
// Array elements after Deleting are:
// 2 3 4 5 7 9