#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	map<char, int> rank;
	rank['6'] = 6;
	rank['7'] = 7;
	rank['8'] = 8;
	rank['9'] = 9;
	rank['T'] = 10;
	rank['J'] = 11;
	rank['Q'] = 12;
	rank['K'] = 13;
	rank['A'] = 14;
	char trump; string card1, card2;
	cin >> trump;
	cin >> card1 >> card2;
	if (card1[1] == card2[1]) {
		cout << (rank[card1[0]] > rank[card2[0]] ? "YES" : "NO") << '\n';
	}
	else {
		cout << (card1[1] == trump ? "YES" : "NO") << '\n';
	}
	return 0;
}
