#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int f,sum=0;
		for(int i=0;i<n;i++)
		{
			cin>>f;
			sum=sum+f;
		}
		cout<<sum<<"\n";

	}
}