//https://www.codechef.com/DEC20B/problems/EVENPSUM/
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long a, b;
        cin >> a >> b;
        long long i=1, j=1;
        long long res = (a/2)*(b/2);
        long long f_res = res+=((a + 1) / 2) * ((b + 1) / 2);
        cout<<f_res<<endl;

    }
}