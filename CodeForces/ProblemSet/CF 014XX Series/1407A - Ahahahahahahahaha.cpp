#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int tc;
	cin >> tc;
	while (tc--) {
		int n;
		cin >> n;
		vector<int> a(n);
		int zeros = 0, ones = 0;
		for (int i = 0; i < n; i++) {
			cin >> a[i];
			zeros += a[i] == 0;
			ones  += a[i] == 1;
		}
		if (zeros >= n/2) {
			cout << zeros << '\n';
			while (zeros--) {
				cout << 0 << ' ';
			}
		}
		else {
			if (ones%2) ones--;
			cout << ones << '\n';
			while(ones--) {
				cout << 1 << ' ';
			}
		}
		cout << '\n';
	}
	return 0;
}
