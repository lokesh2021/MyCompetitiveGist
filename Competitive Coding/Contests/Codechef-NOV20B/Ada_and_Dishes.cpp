#include<bits/stdc++.h>
using namespace std;

void sol()
{
   int n;
  cin>>n;
  vector<int>v(n);
  for(int i=0;i<n;i++) cin>>v[i];
  sort(v.begin(),v.end(),greater<int>());
  if(n==1) cout<<v[0]<<endl;
  if(n==2) cout<<v[0]<<endl;
  if(n==3)
    {
    int sum=v[1];
    int diff=v[0]-v[1];
    sum+=max(diff,v[2]);
    cout<<sum<<endl;
     }
 if(n==4)
    {
     int sum=v[1];
     int diff=v[0]-v[1];
     sum+=min(diff,v[2]);
     int diff1=abs(v[2]-diff);
     sum+=max(v[3],diff1);
     cout<<sum<<endl;
        }
 }
 
int main() 
{ 
    ios_base::sync_with_stdio(false);cin.tie(NULL);
    int t=1;
    cin>>t; 
    while(t--) { 
        sol();
    } 
    return 0;
} 