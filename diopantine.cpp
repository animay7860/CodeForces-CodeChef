#include <bits/stdc++.h>
using namespace std;
int Diophantine(int a, int b, int &x, int &y) {
	if (b == 0) {
		x = 1;
		y = 0;
		return a;
	}
	int x1, y1;
	int result = Diophantine(b, a % b, x1, y1);
	x = y1;
	y = x1 - (a / b) * y1;
	return result;
}
int main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	int t;
	cin >> t;
	while (t--) {
		int a, b, x, y;
		cin >> a >> b;
		x = 0;
		y = 0;
		int result = Diophantine(a, b, x, y);
		cout << result << " " << x << " " << y << endl;
	}
	return 0;
}
