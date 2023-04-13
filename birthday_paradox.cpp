#include <bits/stdc++.h>
using namespace std;
int main() {
	float x = 1;
	int people = 1;
	float num = 365;
	float dem = 365;
	float p;
	cin >> p;
	while (x > 1 - p) {
		x = x * (num ) / dem;
		num--;
		people++;
		cout << people << endl;
		cout << x << endl;
	}
	return 0;
}
