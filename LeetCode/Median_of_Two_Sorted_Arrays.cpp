#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> nums1 = {1,3,4};
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
    int sum=0;
    for(int i=0;i<hash.size()-1;i++)
    {
        sum+=hash[i];
    }
    double final = sum/(hash.size()-1);
    cout<<final;

}