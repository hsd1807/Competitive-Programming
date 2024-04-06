#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int n, sum;
	cin >> n;
	for (int i = 0; i < n; i++) {
		sum = 0;
		unordered_map<char, int> m;
		string s;
		cin >> s;
		for (int i = 0; i < s.size(); i++) {
			m[s[i]]++;
			sum += s[i] - '0';
		}
		cout << (m['0']-- && (m['0'] || m['2'] || m['4'] || m['6'] || m['8']) && !(sum%3) ? "red" : "cyan") << '\n';
	}
	return 0;
}
