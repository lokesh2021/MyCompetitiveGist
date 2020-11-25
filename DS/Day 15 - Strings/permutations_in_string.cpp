#include<bits/stdc++.h>
using namespace std;

//using swapping method
void perm2(char s[],int l,int h)
{
    int i;
    if(l==h)                    //do recursive call untill l==h and print the string
    {
        cout<<s<<"\n";
    }
    else
    {
        for(i=l;i<=h;i++)        // 1) iterate through the string from lower index to higher index
        {
            swap(s[l],s[i]);    // 2) swap element at s[l] with s[i]
            perm2(s,l+1,h);     // 3) call the resursive function with l+1
            swap(s[l],s[i]);    // 4) backtrack (restore the string to its original state)
        }
    }
}

//Course that I followed:- https://www.udemy.com/course/datastructurescncpp/learn/lecture/13554216#questions

//using BackTracking (which is quite tough for now)-->the other method(swap) is easy 
void perm1(char s[],int k)
{
    static int a[10] = {0};
    static char res[10];
    int i;
    
    if(s[k]=='\0')
    {
        res[k]='\0';
        cout<<res<<"\n";
    }
    else
    {
        for(i=0;s[i]!='\0';i++)
        {
            if(a[i]==0)
            {
                res[k]=s[i];
                a[i]=1;
                perm1(s,k+1);
                a[i]=0;
            }
        }
    }
    
}

int main()
{
    char s[] = "abc";
    perm1(s,0);
    cout<<"//\n";
    perm2(s,0,3);
}