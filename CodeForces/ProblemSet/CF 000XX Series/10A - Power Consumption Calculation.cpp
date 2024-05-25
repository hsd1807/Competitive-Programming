#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int n, p1, p2, p3, t1, t2;
	cin >> n >> p1 >> p2 >> p3 >> t1 >> t2;
	int power = 0, pre = 0;
	while (n--) {
		int l, r;
		cin >> l >> r;
		power += (r - l) * p1;
		if (pre) {
			int time = l - pre;
			if (time <= t1) {
				power += p1 * time;
			}
			else if (time <= t1 + t2) {
				power += p1 * t1 + p2 * (time - t1);
			}
			else {
				power += p1 * t1 + p2 * t2 + p3 * (time - t1 - t2);
			}
		}
		pre = r;
	}
	cout << power << '\n';
	return 0;
}
