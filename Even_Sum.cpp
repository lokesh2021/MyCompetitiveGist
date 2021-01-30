#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n,a;
    cin>>n;
    int sum=0;
    for(int i=0;i<n;i++)
    {
        cin>>a;
        sum +=a;
    }
    if(sum%2==0) cout<<"1"<<endl;
    else cout<<"2"<<endl;
    
}

int main(){
    long long t;
    cin>>t;
    while(t--){
    	solve();
    }
    return 0;
} 