#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);cin.tie(NULL);
     long long int t;
     cin>>t;
     while(t--){
         long long int n;
         int t1=0,t2=0,count=0,i=0;
         cin>>n;
         vector<int> v;
         for(int i=0; i<n; i++){
             int r;
             cin>>r;
             v.push_back(r);
         }
         sort(v.begin(),v.end(),greater<int>());
         while(count<n){
             if(t2<t1)
               t2 += v[i];
            else
               t1 += v[i];
               i++;
         count++;
         }
         if (t1>=t2)
            cout<<t1<<endl;
        else
            cout<<t2<<endl;
     }
    
    return 0;
}

