//Move all negative numbers to beginning and positive to end with constant extra space
#include<iostream>
using namespace std;
int main()
{
    int A[9] = {-12, 11, -13, -5, 6, -7, 5, -3, -6};
    int n = sizeof(A)/sizeof(A[0]);
    int i,j=0;
    for( i=0;i<n;i++)
    {   
	    if(A[i]<0)
		{
            if(i!=j)
			    swap(A[i],A[j]);
            j++;
		}
    }
    for(i=0;i<n;i++)
    {
        cout<<A[i]<<" ";
    }
    return 0;

}