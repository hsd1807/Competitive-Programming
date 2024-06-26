#include <bits/stdc++.h>
 
using namespace std;
 
int rev(int n) {
	int ans = 0;
	while (n) {
		ans = ans * 10 + n % 10;
		n /= 10;
	}
	return ans;
}
 
int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int tc;
	cin >> tc;
	while (tc--) {
		int a, b;
		cin >> a >> b;
		cout << rev(rev(a) + rev(b)) << '\n';
	}
	return 0;
}
