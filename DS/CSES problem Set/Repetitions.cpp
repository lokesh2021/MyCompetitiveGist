// https://cses.fi/problemset/task/1069
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a=0,c=0,g=0,t=0;
    string s;
    vector<int> val;
    cin>>s;
    for(int i=0;i<s.length();i++){
        int count = 0;
        for(int j=i;j<s.length();j++){
            while(s[j]==s[j+1]){
                count++;
j++;
            }
            cout<<count<<endl;
        }
        
    }
    cout<<a<<" "<<c<<" "<<g<<" "<<t<<" ";
    int ans = max({a,c,g,t});
    cout<<ans;
}

// Input:ATTCGGGA
// Output:3