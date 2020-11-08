// #include<iostream>
// #include<cmath>
// using namespace std;
// int main()
// {
//     int n;
//     cin>>n;
//     bool flag=0;
//     for(int i=2;i<sqrt(n);i++){
//         if(n%i==0){
//             cout<<"Not a Prime Number";
//             flag=1;
//             break;
//         } 
//     }
//     if(flag==0){
//         cout<<"Prime Number";
//     }
// }

// C++ program to find the prime numbers 
// between a given interval 
#include <bits/stdc++.h> 
using namespace std; 

// Function for print prime 
// number in given range 
void primeInRange(int L, int R) 
{ 
	int flag;
    vector<int> pr; 

	// Traverse each number in the 
	// interval with the help of for loop 
	for (int i = L; i <= R; i++) { 

		// Skip 0 and 1 as they are 
		// niether prime nor composite 
		if (i == 1 || i == 0) 
			continue; 
		flag = 1; 
		for (int j = 2; j <= i / 2; ++j) { 
			if (i % j == 0) { 
				flag = 0; 
				break; 
			} 
		} 
		if (flag == 1) 
			pr.push_back(i);
	} 
	for(auto i:pr){
		cout<<i<<" ";
	}
} 

// Driver Code 
int main() 
{ 
	// Given Range 
	int L = 1; 
	int R = 10; 

	// Function Call 
	primeInRange(L, R); 

	return 0; 
}
