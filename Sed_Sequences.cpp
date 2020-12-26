#include <bits/stdc++.h>
using namespace std;

void solve()
{
	int n, k;
	cin >> n >> k;
	int s = 0;
	for (int i = 0; i < n; ++i)
	{
		int a;
		cin >> a;
		s += a;
	}
	cout << (s % k == 0 ? 0 : 1) << "\n";
}

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	int t;
	cin >> t;
	while (t--)
		solve();
}