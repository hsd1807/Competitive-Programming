#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	string t;
	cin >> t;
	int index = t.size();
	while (index--) {
		if (t[index] == 'a') {
			break;
		}
	}
	string s1, s2;
	for (int i = 0; i <= index; i++) {
		if (t[i] != 'a') {
			s1.push_back(t[i]);
		}
	}
	for (int i = index+1; i < t.size(); i++) {
		s2.push_back(t[i]);
	}
	if (s1.size() > s2.size()) {
		cout << ":(";
	}
	else {
		reverse(s2.begin(), s2.end());
		while (s2.size() > s1.size()) {
			s1.push_back(s2[s2.size()-1]);
			s2.pop_back();
			index++;
		}
		if (s1.size() != s2.size()) cout << ":(";
		else {
			reverse(s2.begin(), s2.end());
			if (s1 == s2) {
				cout << string(t.begin(), t.begin()+index+1);
			}
			else {
				cout << ":(";
			}
		}
	}
	return 0;
}
