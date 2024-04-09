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
		for (int i = 0; i < n; i++) {
			cin >> a[i];
		}
		bool ok = true;
		for (int i = 0; i < n - 2; i++) {
			if (a[i] < 0) {
				ok = false;
				break;
			}
			if (a[i] > 0) {
				a[i+2] -= a[i];
				a[i+1] -= 2*a[i];
				a[i] -= a[i];
			}
		}
		if (a[n-1] != 0 || a[n-2] != 0)  ok = false;
		cout << (ok ? "YES" : "NO") << '\n';
	}
	return 0;
}
