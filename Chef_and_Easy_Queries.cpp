// https://www.codechef.com/problems/CHEFEZQ

#include<bits/stdc++.h>
using namespace std;

int main() 
{ 
    ios_base::sync_with_stdio(false);cin.tie(NULL);
    
    int t=1;
    cin>>t; 
    while(t--) { 
        int n,k,sum=0;
        cin>>n>>k;
        int arr[n];
        for(int i=0;i<n;i++) cin>>arr[i];
        for(int i=0;i<n;i++){
            if(sum=0){
                cout<<i<<endl;
            }
            else{
                sum=arr[i]-k;
                cout<<i<<endl;
            }
        }
        cout<<endl;
        
    } 
    return 0;
} 