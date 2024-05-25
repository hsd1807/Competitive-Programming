#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int n, m;
	cin >> n >> m;
	char pre = '$';
	bool ok = true;
	for (int i = 0; i < n; i++) {
		string s;
		cin >> s;
		if (pre != s[0]) {
			for (int j = 1; j < m; j++) {
				if (s[j] != s[j - 1]) {
					ok = false;
					break;
				}
			}
			pre = s[0];
		}
		else {
			ok = false;
		}
		if (!ok) break;
	}
	cout << (ok ? "YES" : "NO") << '\n';
	return 0;
}
