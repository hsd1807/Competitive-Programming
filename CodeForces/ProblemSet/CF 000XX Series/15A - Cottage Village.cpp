#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int n, t;
	cin >> n >> t;
	vector<vector<float>> x;
	x.push_back({-10001, -10001});
	for (int i = 0; i < n; i++) {
		float xi, a;
		cin >> xi >> a;
		x.push_back({xi - a/2, xi + a/2});
	}
	x.push_back({10001, 10001});
	sort(x.begin(), x.end());
	int cnt = 0;
	for (int i = 1; i <= n; i++) {
		if (x[i][0] - t >= x[i - 1][1]) cnt++;
		if (x[i][1] + t < x[i + 1][0]) cnt++;
	}
	cout << cnt << '\n';
	return 0;
}
