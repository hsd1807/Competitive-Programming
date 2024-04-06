#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	unordered_map<int, int> m;
	int n, mx=INT_MIN, id = -1;
	cin >> n;
	for (int i = 0; i < n; i++) {
		int a;
		cin >> a;
		m[a]++;
		if (m[a] > mx) {
			mx = m[a];
			id = a;
		}
	}
	cout << id << '\n';
	return 0;
}
