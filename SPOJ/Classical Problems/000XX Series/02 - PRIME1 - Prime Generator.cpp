#include <bits/stdc++.h>
 
using namespace std;
 
bool prime(int n) {
	int x = sqrt(n);
	for (int i = 2; i <= x; i++) {
		if (n % i == 0) {
			return 0;
		}
	}
	return 1;
}
 
int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int tc;
	cin >> tc;
	while (tc--) {
		int m, n;
		cin >> m >> n;
		if (m == 1) m++;
		for (int i = m; i <= n; i++) {
			if (prime(i)) {
				cout << i << '\n';
			}
		}
		cout << '\n';
	}
	return 0;
} 
