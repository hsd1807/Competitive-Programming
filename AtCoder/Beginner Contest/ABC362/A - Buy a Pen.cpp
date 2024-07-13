#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int r, g, b;
	cin >> r >> g >> b;
	string s;
	cin >> s;
	if (s == "Blue") cout << min(r, g) << '\n';
	if (s == "Red") cout << min(b, g) << '\n';
	if (s == "Green") cout << min(r, b) << '\n';
	return 0;
}
