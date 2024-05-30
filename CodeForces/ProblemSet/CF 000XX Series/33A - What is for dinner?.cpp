#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int n, m, k;
	cin >> n >> m >> k;
	vector<int> rows(m, INT_MAX);
	for (int i = 0; i < n; i++) {
		int r, c;
		cin >> r >> c;
		rows[r - 1] = min(c, rows[r - 1]);
	}
	int ans = 0;
	for (int i = 0; i < m; i++) {
		ans += rows[i];
	}
	cout << min(k, ans) << '\n';
	return 0;
}
