#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n,k,cntr=0,cnts=0,cntb=0,a;
    	cin>>n>>k;
    	for(int i=0;i<n;i++){
    		cin>>a;
    		if(a>k){
    			cnts++;
    		}
    		else if(a==-1){
    			cntr++;
    		}
    		else if(a==1||a==0){
    			cntb++;
    		}
    	}
    	if(cntr>(n/2)){
    		cout<<"Rejected"<<endl;
    	}
    	else if(cnts>0){
    		cout<<"Too Slow"<<endl;
    	}
        else if(cntb==n){
    		cout<<"Bot"<<endl;
    	}
    	else{
    		cout<<"Accepted"<<endl;
    	}
}

int main(){
    long long t;
    cin>>t;
    while(t--){
    	solve();
    }
    return 0;
} 