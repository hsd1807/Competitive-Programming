#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	ifstream cin("input.txt");
   	ofstream cout("output.txt");
	int n, k;
	cin >> n >> k;
	vector<int> table(n);
	for (int i = 0; i < n; i++) {
		cin >> table[i];
	}
	for (int i = (k - 1) % n; true; i++) {
		if (table[i % n]) {
			cout << i % n + 1 << '\n';
			break;
		}
	}
	return 0;
}
