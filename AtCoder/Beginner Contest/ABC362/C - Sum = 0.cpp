#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int n;
	cin >> n;
	vector<int> l(n), r(n);
	long long sum = 0, diff = 0;
	for (int i = 0; i < n; i++) {
		cin >> l[i] >> r[i];
		sum += l[i];
		diff += r[i] - l[i];
	}
	if (sum <= 0 && diff >= -sum) {
		cout << "Yes" << '\n';
		diff = -sum;
		for (int i = 0; i < n; i++) {
			if (diff) {
				if (r[i] - l[i] >= diff) {
					cout << l[i] + diff << ' ';
					diff = 0;
				}
				else {
					cout << r[i] << ' ';
					diff -= r[i] - l[i];
				}
			}
			else {
				cout << l[i] << ' ';
			}
		}
	}
	else {
		cout << "No" << '\n';
	}
	return 0;
}	
