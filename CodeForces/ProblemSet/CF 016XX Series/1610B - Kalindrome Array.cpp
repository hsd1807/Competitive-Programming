#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int tc;
	cin >> tc;
	while (tc--) {
		int n;
		cin >> n;
		vector<int> a(n);
		for (int i = 0; i < n; i++) {
			cin >> a[i];
		}
		int start = 0, end = n - 1;
		bool kalindrome = true;
		while (start < end) {
			if (a[start] != a[end]) {
				int S = start, E = end;
				int d = a[start];
				while (start < end) {
					if (a[start] == d) start++;
					else if (a[end] == d) end --;
					else if (a[start] != a[end]) {
						kalindrome = false;
						break;
					}
					else {
						start++, end--;
					}
				}
				if (!kalindrome) {
					kalindrome = true;
					start = S, end = E;
					int d = a[end];
					while (start < end) {
						if (a[start] == d) start++;
						else if (a[end] == d) end--;
						else if (a[start] != a[end]) {
							kalindrome = false;
							break;
						}
						else {
							start++, end--;
						}
					}
				}
				break;
			}
			start++, end--;
		}
		cout << (kalindrome ? "YES" : "NO") << '\n';
	}
	return 0;
}
