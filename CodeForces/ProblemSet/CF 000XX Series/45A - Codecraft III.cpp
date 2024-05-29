#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	vector<string> m = {"January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"};
	string s;
	cin >> s;
	int k;
	cin >> k;
	for (int i = 0; i < 12; i++) {
		if (s == m[i]) {
			cout << m[(i + k) % 12] << '\n';
			break;
		}
	}
	return 0;
}
