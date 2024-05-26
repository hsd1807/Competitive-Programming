#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int n, m;
	cin >> n >> m;
	vector<int> boxes(11, 0);
	for (int i = 0; i < m; i++) {
		int a, b;
		cin >> a >> b;
		boxes[b] += a;
	}
	long long ans = 0;
	for (int i = 10; i > 0; i--) {
		if (n >= boxes[i]) {
			ans += i * boxes[i];
			n -= boxes[i];
		}
		else if (n > 0) {
			ans += i * n;
			n = 0;
			break;
		}
	}
	cout << ans << '\n';
	return 0;
}
