#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	bool x1, y1, z1, x2, y2, z2;
	cin >> x1 >> y1 >> z1 >> x2 >> y2 >> z2;
	cout << ((x1 == x2) + (y1 == y2) + (z1 == z2) ? "YES" : "NO") << '\n';
	return 0;
}
