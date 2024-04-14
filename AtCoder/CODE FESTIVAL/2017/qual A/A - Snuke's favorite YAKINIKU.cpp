#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	string s;
	cin >> s;
	cout << (s.size() > 3 && (s[0] == 'Y' && s[1] == 'A' && s[2] == 'K' && s[3] == 'I') ? "Yes" : "No") << '\n';
	return 0;
}
