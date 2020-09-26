
// https://cses.fi/problemset/task/1083

#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long ull;
// Function to get the missing number
int main(){
    ull n, m, k, s=0ull;
    cin >> n;
    k = n;
    while(--n)
    {
        cin >> m;
        s += m;
        k += n;
    }
    cout<< k-s;
}
