#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int n, k, x;
	cin >> n >> k >> x;
	for (int i = 0; i < n; i++) {
		int a;
		cin >> a;
		cout << a << ' ';
		k--;
		if (!k) {
			cout << x << ' ';
		}
	}
	return 0;
}
