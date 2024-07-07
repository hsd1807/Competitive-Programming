#include <bits/stdc++.h>

using namespace std;

bool check(int a, int b, int c, int d) {
	if ((c > a && c < b) || (d > a && d < b)) {
		return 1;
	} 
	else if ((a > c && a < d) || (b > c && b < d)) {
		return 1;
	}
	else {
		return 0;
	}
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int x1, y1, z1, x2, y2, z2, x3, y3, z3, x4, y4, z4;
	cin >> x1 >> y1 >> z1 >> x2 >> y2 >> z2 >> x3 >> y3 >> z3 >> x4 >> y4 >> z4;
	if (check(x1, x2, x3, x4) && check(y1, y2, y3, y4) && check(z1, z2, z3, z4)) {
		cout << "Yes" << '\n';
	}
	else {
		cout << "No" << '\n';
	}
	return 0;
}
