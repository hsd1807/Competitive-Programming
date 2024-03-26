#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int n;
	cin >> n;
	vector<int> speed(n), ram(n), hdd(n), cost(n);
	for (int i = 0; i < n; i++) {
		cin >> speed[i] >> ram[i] >> hdd[i] >> cost[i];
	}
	int ans = -1, price = 1001;
	for (int i = 0; i < n; i++) {
		bool outdated = false;
		for (int j = 0; j < n; j++) {
			if (i != j) {
				if(speed[i] < speed[j] && ram[i] < ram[j] && hdd[i] < hdd[j]) {
					outdated = true;
					break;
				}
			}
		}
		if (!outdated && cost[i] < price) {
			ans = i+1, price = cost[i];
		}
	}
	cout << ans << '\n';
	return 0;
}
