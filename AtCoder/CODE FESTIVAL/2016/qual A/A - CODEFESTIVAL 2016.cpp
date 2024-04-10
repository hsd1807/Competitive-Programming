#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	string s;
	cin >> s;
	cout << string(s.begin(), s.begin()+4) << ' ' << string(s.begin()+4, s.end()) << '\n';
	return 0;
}
