#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int> vec;
    int inp=0;
    for (int i = 0; i < n; i++)
    {
        cin>>inp;
		vec.push_back(inp);
    }
    cout<<vec[2];
    
    return 0;
}