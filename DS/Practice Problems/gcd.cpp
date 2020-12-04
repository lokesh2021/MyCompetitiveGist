//GCD using Euclids Algorithm
//https://youtu.be/dyrRM8dTEus?list=PLUcsbZa0qzu0Qt7e8XEW1W_MqqSaUzFSz&t=907
#include <bits/stdc++.h>
using namespace std;

int gcd(int a, int b)
{
    return a % b == 0 ? b : gcd(b, a % b);
}

int main()
{
    int a, b;
    cin >> a >> b;
    cout<<gcd(a, b);
}