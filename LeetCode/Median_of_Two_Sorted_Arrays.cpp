#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> nums1 = {1,3};
    vector<int> nums2 = {2};
    vector<int> hash;
    auto i=0,j=0;
    for(;i<=nums1.size()&&j<=nums2.size();)
    {
       if(nums1[i]<nums2[j]) 
       {
           hash.push_back(nums1[i]);
           i++;
       }
       else 
       {
           hash.push_back(nums2[j]);
           j++;
       }
    }
    // for(int i=0;i<hash.size()-1;i++)
    // {
    //     cout<<hash[i];
    // }
    double res;
    if((hash.size()-1)%2==0)
    {
        double m1 = hash[((hash.size()-1)/2)-1];
        double m2 = hash[((hash.size()-1)/2)];
        // cout<<hash.size()<<m1<<m2<<endl;
        res = (m1+m2)/2;
        cout<<res;        
    }
    else
    {
        res = hash[((hash.size()-1)/2)];
        cout<<res;
    }


}