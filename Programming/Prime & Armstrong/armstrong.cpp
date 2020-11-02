#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int n,sum=0;
    cin>>n;
    int originaln=n;
    while(n>0){
        int lastdigit = n%10;
        sum+=pow(lastdigit,3);
        n=n/10;
    }
    if(sum==originaln){
        cout<<"It's an Armstrong Number";
    }
    else
    {
        cout<<"Not an Armstrong Number ";
    }
    
}

//Input:153