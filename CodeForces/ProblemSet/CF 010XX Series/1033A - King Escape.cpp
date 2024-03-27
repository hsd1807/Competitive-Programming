#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int n;
	cin >> n;
	int ax, ay;
	cin >> ax >> ay;
	int bx, by;
	cin >> bx >> by;
	int cx, cy;
	cin >> cx >> cy;
	bool row = (bx < ax && cx < ax) || (bx > ax && cx > ax);
	bool col = (by < ay && cy < ay) || (by > ay && cy > ay);
	cout << (row && col ? "YES" : "NO");
	return 0;
}
