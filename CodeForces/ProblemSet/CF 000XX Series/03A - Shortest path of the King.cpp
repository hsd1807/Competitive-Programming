#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	string s, t;
	cin >> s >> t;
	cout << max(abs(s[0] - t[0]), abs(s[1] - t[1])) << '\n';
	char h, v;
	if (s[0] < t[0]) h = 'R';
	else h = 'L';
	if (s[1] < t[1]) v = 'U';
	else v = 'D';
	for (int i = 0; i < min(abs(s[0] - t[0]), abs(s[1] - t[1])) ; i++) {
		cout << h << v << '\n';
	}
	char c = (abs(s[0] - t[0]) > abs(s[1] - t[1]) ? h : v);
	for (int i = min(abs(s[0] - t[0]), abs(s[1] - t[1])); i < max(abs(s[0] - t[0]), abs(s[1] - t[1])); i++) {
		cout << c << '\n';
	}
	return 0;
}
