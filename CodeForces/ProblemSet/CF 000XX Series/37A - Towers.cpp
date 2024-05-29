#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int n;
	cin >> n;
	vector<int> l(n); 
	for (int i = 0; i < n; i++) {
		cin >> l[i];
	}
	sort(l.begin(), l.end());
	int towers = 1, mh = 1, cnt = 1;
	for (int i = 1; i < n; i++) {
		if (l[i] != l[i - 1]) {
			towers++;
			cnt = 1;
		}
		else {
			cnt++;
			mh = max(mh, cnt);
		}
	}
	cout << mh << ' ' << towers << '\n';
	return 0;
}
