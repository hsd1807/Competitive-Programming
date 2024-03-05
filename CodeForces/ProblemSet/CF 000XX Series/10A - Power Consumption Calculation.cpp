#include <bits/stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int n, p1, p2, p3, t1, t2, power = 0, last = -1;
	cin >> n >> p1 >> p2 >> p3 >> t1 >> t2;
	while (n--) {
		int l, r;
		cin >> l >> r;
		power += (r-l)*p1;
		if(last != -1) {
			int extra = l - last;
			if(extra < t1) power += extra*p1;
			else {
				power += t1*p1;
				extra -= t1;
				if (extra < t2) power += extra*p2;
				else {
					power += t2*p2;
					extra -= t2;
					power += extra*p3;
				}
			}
		}
		last = r;
	}
	cout << power << '\n';
	return 0;
}
