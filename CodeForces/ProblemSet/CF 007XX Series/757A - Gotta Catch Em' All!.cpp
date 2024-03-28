#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	string s;
	cin >> s;
	map<char, int> m;
	for (int i = 0; i < s.size(); i++) {
		m[s[i]]++;
	}
	m['a'] /= 2;
	m['u'] /= 2;
	string b = "Bulbasaur";
	int ans = s.size();
	for (int i = 0; i < b.size(); i++) {
		ans = min(m[b[i]], ans);
	}
	cout << ans << '\n';
	return 0;
}
