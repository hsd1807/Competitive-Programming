/*Method - 1*/
#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	map<int, int> c;
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		int a, x;
		cin >> a >> x;
		c[a] = x;
	}
	int m;
	cin >> m;
	for (int i = 0; i < m; i++) {
		int b, y;
		cin >> b >> y;
		c[b] = max(c[b], y);
	}
	long long income = 0;
	for (auto i : c) {
		income += i.second ;
	}
	cout << income;
	return 0;
}
/*Method - 2*/
#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	vector<vector<int>> c;
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		int a, x;
		cin >> a >> x;
		c.push_back({a,x});
	}
	int m;
	cin >> m;
	for (int i = 0; i < m; i++) {
		int b, y;
		cin >> b >> y;
		c.push_back({b,y});
	}
	sort(c.begin(), c.end());
	long long ans = 0;
	for (int i = 0; i < c.size(); i++) {
		if (i < c.size()-1 && c[i][0] == c[i+1][0]) {
			ans += max(c[i][1], c[i+1][1]);
			i++;
		}
		else {
			ans += c[i][1];
		}
	}
	cout << ans;
	return 0;
}
