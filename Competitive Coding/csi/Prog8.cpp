// Q8Given a list of N number of capital letters, output all permutations of these N letters. Assume that letters
// could be repeating
#include <bits/stdc++.h>
using namespace std;

void perm(string a, int l, int r)
{
    if (l == r)
        cout << a << endl;
    else
    {
        for (int i = l; i <= r; i++)
        {
            swap(a[l], a[i]); //swap the elements

            perm(a, l + 1, r); // call recursion

            swap(a[l], a[i]); //swapped the elemenrs back
        }
    }
}

int main()
{
    string str;
    cin >> str;
    int n = str.length();
    perm(str, 0, n - 1);
    return 0;
}

// input:ABC
// output:
// ABC
// ACB
// BAC
// BCA
// CBA
// CAB