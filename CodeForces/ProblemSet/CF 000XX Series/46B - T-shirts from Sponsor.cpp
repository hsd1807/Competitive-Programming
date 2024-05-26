#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	map<string, vector<string>>  m;
	m["S"] = {"S", "M", "L", "XL", "XXL"};
	m["M"] =  {"M", "L", "S", "XL", "XXL"};
	m["L"] = {"L", "XL", "M", "XXL", "S"};
	m["XL"] = {"XL", "XXL", "L", "M", "S"};
	m["XXL"] = {"XXL","XL", "L", "M", "S"};
	map<string, int> n;
	cin >> n["S"] >> n["M"] >> n["L"] >> n["XL"] >> n["XXL"];
	int k;
	cin >> k;
	while (k--) {
		string s;
		cin >> s;
		for (int i = 0; i < 5; i++) {
			if (n[m[s][i]]) {
				cout << m[s][i] << '\n';
				n[m[s][i]]--;
				break;
			}
		}

	}
	return 0;
}
