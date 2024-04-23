#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int n, m;
	cin >> n >> m;
	bool ok = true;
	char prev = 'a';
	for (int i = 0; i < n; i++) {
		string s;
		cin >> s;
		for (int i = 1; i < m; i++) {
			if (s[i] != s[i-1]) {
				ok = false;
				break;
			}
		}
		if (!ok) break;
		if (s[0] == prev) {
			ok = false;
			break;
		}
		prev = s[0];
	}
	cout << (ok ? "YES" : "NO") << '\n';
	return 0;
}
