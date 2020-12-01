//  Insertion Sort
//      Traverse the array while adding the elements into to their correct sorted order
//          example: consider 4, 1, 3, 5 to be the initial array
//          now, since the first element is 4 , remove 4 then add it where it belongs i.e after 3
//          finally the array is 1, 3, 4, 5

#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    for (int i = 1; i < n; i++)
    {
        int current = arr[i];
        int j=i;
        
    }

    for (int i = 0; i < n; i++)
    {
        cout<< arr[i];
    }
}