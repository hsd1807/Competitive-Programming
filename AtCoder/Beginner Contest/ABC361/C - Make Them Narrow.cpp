#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int n, k;
	cin >> n >> k;
	if (n - k == 1) {
		cout << 0 << '\n';
		return 0;
	}
	vector<int> a(n);
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	sort(a.begin(), a.end());
	int mn = INT_MAX;
	for (int i = 0; i <= k; i++) {
		mn = min(mn, abs(a[i] - a[n - k - 1 + i]));
	}
	cout << mn << '\n';
	return 0;
}
