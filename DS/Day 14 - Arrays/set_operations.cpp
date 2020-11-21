#include<iostream> 
using namespace std; 

int ar3n3 = 0;  //Global array to maintain the 3rd array size ar3n3 = array3 size n3

void Union(int arr1[], int arr2[], int n1, 
							int n2, int arr3[]) 
{ 
	int i = 0, j = 0, k = 0; 

	// Traverse both array 
	while (i<n1 && j <n2) 
	{ 
		// Check if current element of first 
		// array is smaller than current element 
		// of second array. If yes, store first 
		// array element and increment first array 
		// index. Otherwise do same with second array 
		if (arr1[i] < arr2[j]) 
			arr3[k++] = arr1[i++]; 
		else if(arr2[j] < arr1[i])
			arr3[k++] = arr2[j++];
        else
        {
            arr3[k++]=arr1[i++];
            j++;
        } 
	} 

	// Store remaining elements of first array 
	while (i < n1) 
		arr3[k++] = arr1[i++]; 

	// Store remaining elements of second array 
	while (j < n2) 
		arr3[k++] = arr2[j++]; 

    ar3n3 = k;
} 


void Intersection(int arr1[], int arr2[], int n1, 
							int n2, int arr3[]) 
{ 
	int i = 0, j = 0, k = 0; 

	// Traverse both array 
	while (i<n1 && j <n2) 
	{ 
 
		if (arr1[i] < arr2[j]) 
			i++; 
		else if(arr2[j] < arr1[i])
			j++;
        else if(arr1[i]==arr2[j])
        {
            arr3[k++]=arr1[i++];
            j++;
        } 
	} 

    ar3n3 = k;
} 


void Difference(int arr1[], int arr2[], int n1, 
							int n2, int arr3[]) 
{ 
	int i = 0, j = 0, k = 0; 

	// Traverse both array 
	while (i<n1 && j <n2) 
	{ 
		// Check if current element of first 
		// array is smaller than current element 
		// of second array. If yes, store first 
		// array element and increment first array 
		// index. Otherwise do same with second array 
		if (arr1[i] < arr2[j]) 
			arr3[k++] = arr1[i++]; 
		else if(arr2[j] < arr1[i])
			j++;
        else
        {
            i++;
            j++;
        } 
	} 

	// Store remaining elements of first array 
	while (i < n1) 
		arr3[k++] = arr1[i++]; 

    ar3n3 = k;
} 


// Driver code 
int main() 
{

	int arr1[] = {1, 3, 4, 7}; 
	int n1 = sizeof(arr1) / sizeof(arr1[0]); 

	int arr2[] = {2, 4, 7, 8}; 
	int n2 = sizeof(arr2) / sizeof(arr2[0]); 

	int arr3[n1+n2]; 
	Union(arr1, arr2, n1, n2, arr3); 

	cout << "Array after Union" <<endl; 
	for (int i=0; i < ar3n3; i++) 
		cout << arr3[i] << " ";

    cout<<endl;

    Intersection(arr1, arr2, n1, n2, arr3); 
	cout << "Array after Intersection" <<endl; 
	for (int i=0; i < ar3n3; i++) 
		cout << arr3[i] << " ";

    cout<<endl;

    Difference(arr1, arr2, n1, n2, arr3); 
	cout << "Array after Intersection" <<endl; 
	for (int i=0; i < ar3n3; i++) 
		cout << arr3[i] << " ";

	return 0;

} 


//Output:
// Array after merging
// 1 2 3 4 5 7 7 8

// Time Complexity : O(n1 + n2)
// Auxiliary Space : O(n1 + n2)