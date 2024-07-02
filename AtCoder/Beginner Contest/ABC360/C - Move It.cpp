#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int n;
	cin >> n;
	map<int, int> m;
	vector<int> a(n + 1, 0);
	vector<vector<int>> w;
	int ans = 0;
	for (int i = 0; i < n; i++) {
		int x;
		cin >> x;
		a[x]++;
		m[i] = x;
	}
	int index = 0;
	for (int i = 1; i <= n; i++) {
		if (!a[i]) {
			index++;
		}
	} 
	for (int i = 0; i < n; i++) {
		int x;
		cin >> x;
		w.push_back({x, i});
	}
	sort(w.begin(), w.end());
	for (int i = 0; i < w.size(); i++) {
		if (!index) break;
		if (a[m[w[i][1]]] > 1) {
			a[m[w[i][1]]]--;
			ans += w[i][0];
			index--;
		}
	}
	cout << ans << '\n';
	return 0;
}
