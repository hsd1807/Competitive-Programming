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
		vector<int> a(n), b(n);
		map<int, bool> m1, m2;
		int uni1 = 0, uni2 = 0;
		for (int i = 0; i < n; i++) {
			cin >> a[i];
			if (!m1[a[i]]) {
				uni1++;
				m1[a[i]] = 1;
			}
		}
		for (int i = 0; i < n; i++) {
			cin >> b[i];
			if (!m2[b[i]]) {
				uni2++;
				m2[b[i]] = 1;
			}
		}
		cout << (uni1 + uni2 >= 4 && n > 2 ? "YES" : "NO") << '\n';
	}
	return 0;
}
