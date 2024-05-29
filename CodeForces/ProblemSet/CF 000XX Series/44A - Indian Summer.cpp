#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	map<string, bool> m;
	int n, cnt = 0;
	cin >> n;
	while (n--) {
		string s, s1, s2;
		cin >> s1 >> s2;
		s = s1 + '$' + s2;
		cnt += m[s] == 0;
		m[s] = 1;
	}
	cout << cnt << '\n';
	return 0;
}
