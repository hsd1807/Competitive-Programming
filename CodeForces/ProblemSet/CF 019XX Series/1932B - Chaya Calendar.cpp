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
		int curr = 0;
		for (int i = 0; i < n; i++) {
			int a;
			cin >> a;
			curr += a - (curr % a);
		}
		cout << curr << '\n';
	}
	return 0;
}
