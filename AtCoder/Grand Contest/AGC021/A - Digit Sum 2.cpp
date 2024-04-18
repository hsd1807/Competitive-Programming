#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	string s;
	cin >> s;
	if (s.size() == 1) {
		cout << s << '\n';
	}
	else {
		int cnt = 0;
		for (int i = 0; i < s.size(); i++) {
			cnt += s[i] == '9';
		}
		if (cnt == s.size()) {
			cout << s.size() * 9 << '\n';
		}
		else if (cnt == s.size() - 1 && s[0] != '9') {
			cout << (s.size()-1) * 9 + (s[0] - '0') << '\n';
		}
		else {
			cout << (s.size()-1) * 9 + (s[0] - '1') << '\n';
		}
	}
	return 0;
}
