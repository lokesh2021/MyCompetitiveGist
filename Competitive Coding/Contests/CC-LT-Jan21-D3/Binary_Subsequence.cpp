//Didn't solve the problem because there was only 2 mins left for the contest to end
//https://www.codechef.com/LTIME92C/problems/BINSUBS
#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    vector<int> vec(n);
    for (int i = 0; i < n; i++)
    {
        cin >> vec[i];
    }
    vec.shrink_to_fit();
    cout << "\nVector elements are: ";
    cout<<vec[1];
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}