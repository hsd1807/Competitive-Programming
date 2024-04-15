#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int tc;
	cin >> tc;
	while (tc--) {
		int n, k;
		cin >> n >> k;
		vector<int> a(n);
		for (int i = 0; i < n; i++) {
			cin >> a[i];
		}
		vector<int> l(n+1, 0);
		for (int i = 0; i < n; i++) {
			int x;
			cin >> x;
			l[abs(x)] += a[i];
		}
		long long bullets = 0;
		bool survived = true;
		for (int i = 1; i <= n; i++) {
			bullets += k;
			if (bullets < l[i]) {
				survived = false;
				break;
			}
			bullets -= l[i];
		}
		cout << (survived ? "YES" : "NO") << '\n';
	}
	return 0;
}
