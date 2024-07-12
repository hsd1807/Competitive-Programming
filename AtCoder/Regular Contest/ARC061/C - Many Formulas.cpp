#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	string s;
	cin >> s;
	int n = s.size();
	long long ans = 0;
	for (int i = 0; i < (1 << n - 1); i++) {
		long long num = s[0] - '0';
		for (int j = 0; j < n - 1; j++) {
			if (i & (1 << j)) {
				ans += num;
				num = 0;
			}
			num = num * 10 + s[j + 1] - '0';
		}
		ans += num;
	}
	cout << ans << '\n';
	return 0;
}
