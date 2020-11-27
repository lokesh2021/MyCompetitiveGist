#pragma GCC optimize("Ofast")
#include<bits/stdc++.h>
using namespace std;
#define lli long long int

void solve()
{
    lli n;
	cin>>n;
	if(n==1){
	    cout<<0<<endl;
	    return;
	}
	if(n==2){
	    cout<<1<<endl;
	    return;
	}
	if(n==3){
	    cout<<2<<endl;
	    return;
	}
	if(n%2==0){
	    cout<<2<<endl;
	    return;
	}
	cout<<3<<endl;
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        solve();
    }
}