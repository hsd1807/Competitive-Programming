#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int n;
	cin >> n;
	string s;
	cin >> s;
	long long y = 1;
	long long ans = 1;
	long long x = 1000000007;
	int index = 0;
	for (int i = 0; i < n - 1; i++) {
		if (s[i] == s[i + 1]) {
			i++;
			y = (( (i - index) / 2 ) + ( (i - index) % 2) );
			if (!y) y++;
			ans *= y;
			ans %= x;
			while (s[i] == s[i + 1]) {
				i++;
			}
			index = i;
		}
	}
	y = ( ((n - index) / 2) + ( (n - index) % 2) ) ;
	if (!y) y++;
	ans *= y;
	cout << ans % x << '\n';
	return 0;
}
