#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	string s;
	cin >> s;
	int maxi = 0;
	for (int i = 0; i < s.size(); i++) {
		string temp;
		for (int j = i; j < s.size(); j++) {
			temp += s[j];
			if (s.find(temp, i + 1) != -1) maxi = max(maxi, (int) temp.size());
		}
	}
	cout << maxi << '\n';
	return 0;
}
