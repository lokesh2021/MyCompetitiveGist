#include<bits/stdc++.h>
using namespace std;

bool isPrime(int n){
    for(int i=2;i*i<=n;i++){
        if(n%i==0) return false;
    }
    return true;
}

int main()
{
    int n;
    cin>>n;
    vector<int> vec;
    for(int i=0;i<n;i++) cin>>vec[i];
    for(int i=0;i<n;i++) cout<<vec[1];
    // for(int i=0;i<n;i++){
    //     int num=vec[i];
    //     if(isPrime(num)==true) cout<<vec[i];
    // }
    return 0;
}