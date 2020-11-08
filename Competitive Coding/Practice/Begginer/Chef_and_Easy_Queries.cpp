// https://www.codechef.com/problems/CHEFEZQ

#include<bits/stdc++.h>
using namespace std;

int main() 
{ 
    ios_base::sync_with_stdio(false);cin.tie(NULL);
    
    int t=1;
    cin>>t; 
    while(t--) { 
        int n,k,sum=0,j=0;
        cin>>n>>k;
        int arr[n];
        for(int i=0;i<n;i++) cin>>arr[i];
        for(int i=0;i<n;i++){
            sum-=k;
            sum+=arr[i];
            j+=1;
            if(sum<0)
                break;
            else
            {
                j+=sum/k+1;
            }

        }
        cout<<j<<endl;
        
    } 
    return 0;
} 