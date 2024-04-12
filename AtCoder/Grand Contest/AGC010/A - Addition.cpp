#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int n;
	cin >> n;
	int cnt = 0;
	for (int i = 0; i < n; i++) {
		int a;
		cin >> a;
		cnt += a % 2;
	}
	cout << (cnt % 2 ? "NO" : "YES") << '\n';
	return 0;
}
