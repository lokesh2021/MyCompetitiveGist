#include <bits/stdc++.h>
using namespace std;

void solve()
{
       int n;
       cin>>n;
       vector<int> vec(n);
       for(int i=0;i<n;i++)
       {
           cin>>vec[i];
       }
       for(int i=0;i<vec.size();i++)
       {
           cout<<vec[i]<<" ";
       }
}

int main(){
    int t;
    cin>>t;
    while(t--){
    	solve();
    }
    return 0;
} 