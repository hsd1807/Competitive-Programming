#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int h,w;
	cin >> h >> w;
	for (int i = 1; i <= h; i++) {
		for (char j = 'A'; j < 'A' + w; j++) {
			string s;
			cin >> s;
			if (s == "snuke") {
				cout << j << i << '\n';
				break;
			}
		}
	}
	return 0;
}
