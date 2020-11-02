#include<iostream>
#include <vector>
using namespace std;
int main()
{
    int n,ans;
    vector<int> div;
    cin>>n;
    while(n>0){
        ans = n%2;
        div.insert(div.begin(),ans);
        n=n/2;
    }
    for(auto it : div)
        cout<<it;
}


// Input:  23
// Output: 10111