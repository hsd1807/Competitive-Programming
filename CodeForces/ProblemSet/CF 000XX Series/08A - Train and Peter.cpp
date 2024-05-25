#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	string str, s1, s2;
	cin >> str >> s1 >> s2;
	bool f = true, b = true;
	if (str.find(s1) == -1)  f = !f;
	else {
		string s(str.begin() + str.find(s1) + s1.size(), str.end());
		if (s.find(s2) == -1) f = !f;
	}
	reverse(str.begin(), str.end());
	if (str.find(s1) == -1) b = !b;
	else {
		string s(str.begin() + str.find(s1) + s1.size(), str.end());
		if (s.find(s2) == -1) b = !b;
	}
	if (f && b) cout << "both" << '\n';
	else if (f) cout << "forward" << '\n';
	else if (b) cout << "backward" << '\n';
	else cout << "fantasy" << '\n';
	return 0;
}
