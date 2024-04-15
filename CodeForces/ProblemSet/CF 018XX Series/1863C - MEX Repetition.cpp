#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int tc;
	cin >> tc;
	while (tc--) {
		long long n, k;
		cin >> n >> k;
		vector<int> a(n);
		int sum = 0;
		for (int i = 0; i < n; i++) {
			cin >> a[i];
			sum += a[i];
		}
		a.push_back(n * (n+1) / 2 - sum);
		k %= n + 1;
    
		reverse(a.begin(), a.end());
		reverse(a.begin(), a.begin() + k);
		reverse(a.begin() + k, a.end());
    
		for (int i = 0; i < n; i++) {
			cout << a[i] << " \n"[i == n - 1];
		}
	}
	return 0;
}
