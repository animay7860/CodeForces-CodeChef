#include <bits/stdc++.h>
using namespace std;
int main()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	// int t;
	// cin >> t;
	// while (t--)
	// {
	int n;
	cin >> n;
	int count;
	for (int i = 2; i * i <= n; i++)
	{
		if (n % i == 0)
		{
			count = 0;
			while (n % i == 0)
			{
				n = n / i;
				count++;
			}

			cout << i << " ^ " << count;
			// cout << endl;
		}
	}
	if (n > 1)
	{
		cout << " " << n << " ^ " << 1;
	}
	// }
	return 0;
}
