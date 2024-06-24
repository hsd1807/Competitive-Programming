#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int n, k;
	cin >> n >> k;
	string s, slogan;
	cin >> slogan;
	if (k <= n / 2) {
		s = "LEFT";
	}
	else {
		s = "RIGHT";
	}
	int moves = min(k - 1, n - k);
	for (int i = 1; i <= moves; i++) {
		cout << s << '\n';
	}
	if (s == "LEFT") {
		s = "RIGHT";
	} 
	else {
		s = "LEFT";
	} 
	if (n - k <= k - 1) {
		reverse(slogan.begin(), slogan.end());
	}
	for (int i = 0; i < n; i++) {
		cout << "PRINT " << slogan[i] << '\n';
		if (i < n - 1) cout << s << '\n';
	}
	return 0;
}
