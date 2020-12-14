// https://cses.fi/problemset/task/1069
#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    char c=s[0];
    vector<int> vi={1};
    cin>>s;
    int count = 1;
    for(int i=0;i<s.length();i++){
        if((s[i]==s[i+1])){
            count++;
            vi.push_back(count);
            
        }
        else
        {
            c=s[i+1];
            count=1;
        }
        
    }
    
    cout<<*max_element(vi.begin(),vi.end());
}

// Input:ATTCGGGA
// Output:3

//TimeComplexity: O(n)
//SpaceComplexity: 6n+5