#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int tc;
	cin >> tc;
	while (tc--) {
		int n;
		cin >> n;
		int start = 1, end = n;
		while (start < end) {
			cout << start++ << ' ' << end-- << ' ';
		}
		if (start == end) cout << start;
		cout << '\n';
	}
	return 0;
}
