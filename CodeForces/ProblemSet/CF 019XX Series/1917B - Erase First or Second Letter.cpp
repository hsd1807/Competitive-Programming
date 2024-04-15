#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int tc;
	cin >> tc;
	while (tc--) {
		long long n;
		cin >> n;
		string s;
		cin >> s;
		map<char, bool> m;
		long long  unique = n * (n + 1) / 2;

		for (int i = 0; i < n; i++) {
			if (m[s[i]]) {
				unique -= (n - i);
			}
			else {
				m[s[i]] = 1;
			}
		}
		cout << unique << '\n';
	}
	return 0;
}
