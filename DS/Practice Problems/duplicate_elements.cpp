#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[7]={1,2,3,3,5,5,5};
    int n=7;
    for(int i=0;i<n-1;i++)                  //iterate through the array
    {
        if(arr[i]==arr[i+1])                //find the first duplicate element
        {   
            int j=i+1;                      //Inititalize J to i+1
            while(arr[j]==arr[i]) j++;      //loop through the array untill we find all the duplicate elements
            cout<<arr[i]<<" "<<j-i<<endl;   //output the duplicate elemet and number of time that elements has been repeated
            i=j-1;                          //now move i to j-1 
        }
    }

}