#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int ans, count = 0;

        for (int C = 1; C <= n; C++)
        {
            for (int B = C; B <= n;B=B+C)
            {
                if (B % C == 0)
                {
                    for (int A = C; A <= n; A=A+B)
                    {
                        if (A % B == C)
                        {
                            count++;
                        }
                    }
                }
            }
        }
        cout<<count<<endl;
    }
}