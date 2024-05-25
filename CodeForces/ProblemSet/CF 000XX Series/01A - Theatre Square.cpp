#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	long long n, m, a;
	cin >> n >> m >> a;
	long long cnt = (n / a) * (m / a);
	if (n % a) cnt += (m / a);
	if (m % a) cnt += (n / a);
	if (n % a && m % a) cnt++;
	cout << cnt << '\n';
	return 0;
}
