#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int n;
	cin >> n;
	vector<int> t(n);
	for (int i = 0; i < n; i++) {
		cin >> t[i];
	}
	bool ap = true;
	int d = t[1] - t[0];
	for (int i = 1; i < n; i++) {
		if (t[i] - t[i-1] != d) {
			ap = false;
			break;
		}
	}
	cout << (ap ? t[n-1]+d : t[n-1]) << '\n';
	return 0;
}
