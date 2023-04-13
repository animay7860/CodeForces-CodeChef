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
		int n, i;
		cin >> n >> i;
		if (n & 1) {
			cout << "Yes The Number is Odd" << endl;
		}
		else {
			cout << "The No is not odd" << endl;
		}
		// now we want to know ith bit in a given binary No; for this purpose we use masking
		int mask = 1 << i;
		cout << "The i'th Bit of a given Number is" << endl;
		if (n & mask > 0) {
			cout << "1" << endl;
		}
		else {
			cout << "0" << endl;
		}
	}
	return 0;
}
