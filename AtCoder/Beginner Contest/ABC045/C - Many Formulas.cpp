#include <bits/stdc++.h>

using namespace std;

long long sum(string &s, int index, string &temp) {
	if (index == s.size() - 1) {
		string t;
		long long sum = 0;
		for (int i = 0; i < temp.size(); i++) {
			if (temp[i] != '+') {
				t.push_back(temp[i]);
			}
			else {
				sum += stoll(t);
				t.clear();
			}
		}
		sum += stoll(t);
		return sum;
	}
	temp.push_back(s[index + 1]);
	long long s1 = sum(s, index + 1, temp), s2 = 0;
	if (index < s.size() - 2) {
		temp.push_back('+');
		s2 = sum(s, index + 1, temp);
		temp.pop_back();
	}
	temp.pop_back();
	return s1 + s2;
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	string s;
	cin >> s;
	string temp;
	temp = s[0];
	long long s1 = sum(s, 0, temp), s2 = 0;
	temp.push_back('+');
	if (s.size() > 1) s2 = sum(s, 0, temp);
	cout << s1 + s2 << '\n';
	return 0;
}
