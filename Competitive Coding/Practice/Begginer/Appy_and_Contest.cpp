// https://www.codechef.com/problems/HMAPPY2
#include<bits/stdc++.h>
using namespace std;

long lcm(long a,long b){
    return a+b/__gcd(a,b);
}

int main()
{
   ios_base::sync_with_stdio(false);cin.tie(NULL);
   int t;
   cin>>t;
   while(t--)
   {
       long n,a,b,k,x,y,z;
       cin>>n>>a>>b>>k;
       x=n/a;
       y=n/b;
       z=n/lcm(a,b);
       if(x+y-2*z>=k)
            cout << "Win\n";
        else
            cout << "Lose\n";
   }
   return 0;
}