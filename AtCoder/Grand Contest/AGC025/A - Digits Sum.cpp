#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int n;
	cin >> n;
	if (n % 10) {
		int sum = 0;
		while (n) {
			sum += n % 10;
			n /= 10;
		}
		cout << sum << '\n';
	}
	else {
		cout << 10 << '\n';
	}
	return 0;
}
