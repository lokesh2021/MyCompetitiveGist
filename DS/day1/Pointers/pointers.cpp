// Pointers are used to accessing resources outside the program
// Accessing heaps
// Accessing Resources
// Parameter passing

#include<bits/stdc++.h>
using namespace std;
int main(){
    int a = 10;
    int *p;
    p = &a;
    cout<<"initial value of a:"<<a<<"\n";
    cout<<"accessing a from pointer variable p: "<<*p;
}