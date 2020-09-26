#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long ull;

int sum(int a)
{
    // ull ln = 10000000ull;
    int sum = 0;
    for (int i = 0; i < 100; i++)
    {
        for (int j = 0; j < 100; j++)
        {
            int z = (i * a) + (j * (a + 1));
            if (z % a | z % a + 1 != 0)
            {
                sum =+ z;
            }
        }
    }
    return sum;
};

int main()
{

    int n, a;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> a;
        cout<<sum(a)<<"\n";
    }
}









"all":"All Districts"

