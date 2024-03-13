#include <bits/stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	string p1, p2;
	cin >> p1 >> p2;
	int n;
	cin >> n;
	while (n--) {
		cout << p1 << ' ' << p2 << '\n';
		string killed, next;
		cin >> killed >> next;
		if (killed == p1) {
			p1 = next;
		}
		else {
			p2 = next;
		}
	}
	cout << p1 << ' ' << p2 << '\n';
	return 0;
}
