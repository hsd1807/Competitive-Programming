#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	string s, t;
	cin >> s >> t;
	bool ok = false;
	for (int w = 1; w < s.size(); w++) {
		vector<string> v;
		string str;
		int cnt = 0;
		for (int i = 0; i < s.size(); i++) {
			if (cnt == w) {
				cnt = 0;
				v.push_back(str);
				str = "";
			}
			cnt++;
			str += s[i];
		}
		v.push_back(str);
		while(v[v.size() - 1].size() < w) {
			v[v.size() - 1] += '*';
		}
		for (int j = 0; j < w; j++) {
			string vr;
			for (int i = 0; i < v.size(); i++) {
				if (v[i][j] != '*')
					vr += v[i][j];
			}
			if (vr == t) {
				ok = true;
				break;
			}
		}
		if (ok) break;
	}
	cout << (ok ? "Yes" : "No") << '\n';
	return 0;
}
