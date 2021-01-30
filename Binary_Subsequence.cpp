#include <bits/stdc++.h>
using namespace std;

void solve()
{
   int n,a,odd_count=0,evem_count=0;
    	cin>>n;
    	for(int i=0;i<n;i++){
    		cin>>a;
    		if(a%2!=0){
    			odd_count++;
    		}
    		else{
    			evem_count++;
    		}
    	}
    	if(odd_count>evem_count){
    		cout<<evem_count<<endl;
    	}
    	else{
    		cout<<odd_count<<endl;
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