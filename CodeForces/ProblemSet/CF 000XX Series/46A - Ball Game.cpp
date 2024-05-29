#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int n;
	cin >> n;
	int start = 1, jump = 1;
	for (int i = 1; i < n; i++) {
		start = (start + jump++) % n;
		cout << (start == 0 ? n : start) << " \n"[i == n - 1];
	}
	return 0;
}
