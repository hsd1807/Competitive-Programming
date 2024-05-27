#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int n, x = 0, y;
	cin >> n;
	y = n - 2;
	for (int i = 2; i < n; i++) {
		int a = n;
		while (a) {
			x += a % i;
			a /= i;
		}
	}
	int gcd = __gcd(x , y);
	cout << x / gcd << '/' << y / gcd << '\n';
	return 0;
}
