#include <bits/stdc++.h>
using namespace std;
int main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	int t;
	cin >> t;
	while (t--) {
		int a, b;
		cin >> a >> b;
		int count = 0;
		for (int i = a; i <= b; i++) {
			for (int j = i; j <= b; j++) {
				count++;
			}
		}
		cout << count << endl;
	}
	return 0;
}