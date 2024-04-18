#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	long long x, y;
	cin >> x >> y;
	if (x % y == 0) {
		cout << -1 << '\n';
	}
	else {
		for (int i = x; i <= 10e18; i += x) {
			if (i % y) {
				cout << i << '\n';
				break;
			}
		}
	}
	return 0;
}
