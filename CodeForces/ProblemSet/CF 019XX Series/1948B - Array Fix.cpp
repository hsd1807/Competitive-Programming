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
		vector<int> a(n);
		for (int i = 0; i < n; i++) {
			cin >> a[i];
		}
		bool possible = true;
		bool ok = true;
		while (possible) {
			possible = false;
			ok = true;
			vector<int> temp;
			for (int i = 0; i < a.size()-1; i++) {
				if (a[i] > 9) possible = true;

				if (!ok) temp.push_back(a[i]);
				else if (a[i] > a[i+1]) {
					if (a[i] > 9) {
						temp.push_back(a[i]/10);
						temp.push_back(a[i]%10);
						ok = false;
					}
					else {
						ok = false;
						possible = false;
						break;
					}
				}
				else {
					temp.push_back(a[i]);
				}
			}
			if (ok) break;
			if (!possible) break;
			temp.push_back(a.back());
			a = temp;
		}
		cout << (ok ? "YES" : "NO") << '\n';
	}
	return 0;
}
