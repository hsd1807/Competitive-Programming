#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int a, b, c;
	cin >> a >> b >> c;
	long long k;
	cin >> k;
	if (k % 2) {
		cout << b - a << '\n';
	}
	else {
		cout << a - b << '\n';
	}
	return 0;
}
