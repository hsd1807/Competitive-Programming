#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int n;
	cin >> n;
	vector<string> names = {"Sheldon", "Leonard", "Penny", "Rajesh", "Howard"};
	int total = 0, curr = 5;
	while (true) {
		if (n <= total + curr) {
			n -= total;
			curr /= 5;
			total = curr;
			for(int i = 0; i < 5; i++) {
				if (n <= total) {
					cout << names[i] << '\n';
					return 0;
				}
				total += curr;
			}
		}
		total += curr;
		curr *= 2;
	}
	return 0;
}
