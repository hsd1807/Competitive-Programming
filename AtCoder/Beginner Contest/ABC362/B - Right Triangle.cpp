#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int xa, ya, xb, yb, xc, yc;
	cin >> xa >> ya >> xb >> yb >> xc >> yc;
	int s1 = pow(abs(xa - xb), 2) + pow(abs(ya - yb), 2);
	int s2 = pow(abs(xc - xb), 2) + pow(abs(yc - yb), 2);
	int s3 = pow(abs(xa - xc), 2) + pow(abs(ya - yc), 2);
	vector<int> s = {s1, s2, s3};
	sort(s.begin(), s.end());
	if (s[2] == s[0] + s[1]) {
		cout << "Yes" << '\n';
	}
	else {
		cout << "No" << '\n';
	}
	return 0;
}
