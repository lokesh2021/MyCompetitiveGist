// https://www.codechef.com/NOV20B/problems/RESTORE

#include<bits/stdc++.h>
using namespace std;
#define prime(L,R) int flag;vector<int> pr;  for (int i = L; i <= R; i++) { if (i == 1 || i == 0) continue; flag = 1; for (int j = 2; j <= i / 2; ++j) { if (i % j == 0) { flag = 0; break; } } if (flag == 1) pr.push_back(i); } 

int main() 
{ 
    ios_base::sync_with_stdio(false);cin.tie(NULL);
    prime(1,10000);
    
    int t=1;
    cin>>t; 
    while(t--) { 
        int n;
        cin>>n;
        vector<int>v(n);
        for(int i=0;i<n;i++) cin>>v[i];
        for(auto i=v.begin();i<v.end();i++){
            cout<<pr[*i-1]<<" ";
        }
        cout<<endl;
    } 
    return 0;
} 