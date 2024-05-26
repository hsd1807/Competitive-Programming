#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int n;
	cin >> n;
	vector<int> d(n);
	for (int i = 1; i < n; i++) {
		cin >> d[i];
	}
	int a, b;
	cin >> a >> b;
	int ans = 0;
	for (int i = a; i < b; i++) {
		ans += d[i];
	}
	cout << ans << '\n';
	return 0;
}
