#include <bits/stdc++.h>
using namespace std;
  
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);   
    vector<int> vec;
    int i=0;
    do{
        cin>>vec[i];
        i++;
    }while(vec[i-1]<43);
    for(int i=0;i<vec.size();i++)
    {
        cout<<vec[i]<<"\n";
    }
    return 0;
}  
